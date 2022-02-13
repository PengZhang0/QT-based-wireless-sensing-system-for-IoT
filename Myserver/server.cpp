#include "server.h"
#include <QDebug>
#include <QTcpSocket>
#include <QDataStream>

Server::Server(QObject *parent) : QObject(parent)
{
    package_size = 0;
    server = new QTcpServer(this);//实例化服务器对象

    bool ok = server->listen(QHostAddress::Any,11111);  //修改端口，区别
    if(ok)
    {
        qDebug()<<"server ok";
    }
    connect(server,&QTcpServer::newConnection,this,&Server::acceptConnection);

    //初始化数据库
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./test.db");
    ok = db.open();
    qDebug()<<"sql ok = "<<ok;

    //创建一张表
    QSqlQuery query(db);
    query.exec("create table t_user(username char(20) primary key,passwd varchar(20) not null);");
}

void Server::acceptConnection()
{
    qDebug()<<"new Connection";
    client = server->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&Server::onRecvData);
    qDebug()<<"client ip:" << client->peerAddress();
}
//登录功能
bool Server::handle_login(QString username, QString password)
{
   QSqlQuery query(db);
   QString sql = QString("select username,passwd from t_user where username='%1' and passwd='%2';").arg(username).arg(password);
   bool ok = query.exec(sql);
   if(!ok)
   {
       qDebug()<<"login error"<<query.lastError().text();
       return false;
   }

   if(query.next()) //next用来判断结果集中的数据是否为空,如果返回true，表示查到了结果,否侧表示什么都没有查到
   {
       return true;
   }

   return false;
}

//注册功能
bool Server::handle_register(QString username, QString password)
{
    QSqlQuery query(db);
    QString sql = QString("insert into t_user values('%1','%2')").arg(username).arg(password);
    bool ok = query.exec(sql);
    if(!ok)
    {
        qDebug()<<"register error"<<query.lastError().text();
        return false;
    }
    else
    {
        qDebug()<<"register success"<<username;
        return true;
    }
}

void Server::recv_real_data()
{
    QDataStream out(client);
    qint8 flag;
    QString username;
    QString passwd;
    out >> flag >> username >> passwd;
    if(flag == 1){
        bool ok = handle_login(username, passwd);
        QByteArray arr;
        QDataStream in(&arr,QIODevice::WriteOnly);
        qint8 flag = 10;    //表示对登录的回应
        qDebug() << "Server# OK is: " << ok;
        in << qint16(0) << flag << ok;
        qint16 len = arr.size() - sizeof(qint16);
        in.device()->seek(0);       //重新把长度写到第一个
        in << len;
        client->write(arr);
    }else if(flag == 2)
    {
        bool ok = handle_register(username, passwd);
        QByteArray arr;
        QDataStream in(&arr,QIODevice::WriteOnly);
        qint8 flag = 20;    //表示对登录的回应
        qDebug() << "Server# OK is: " << ok;
        in << qint16(0) << flag << ok;
        qint16 len = arr.size() - sizeof(qint16);
        in.device()->seek(0);       //重新把长度写到第一个
        in << len;
        client->write(arr);
    }
}

//接受来自客户端的数据
void Server::onRecvData()
{
      QDataStream out(client);
      while (client->bytesAvailable() > 0) {
          if(package_size == 0)
          {
              if(client->bytesAvailable() < sizeof(qint16)) return;

              out >> package_size;
              qDebug() << "Server# pkg_size is: " <<package_size;
          }
          else{
              if(client->bytesAvailable() < package_size) return;
              recv_real_data();
              package_size = 0;
          }
      }
}
