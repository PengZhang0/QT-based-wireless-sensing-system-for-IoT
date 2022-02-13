#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class Server : public QObject
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    bool handle_login(QString username, QString password);
    void recv_real_data();
    bool handle_register(QString username, QString password);

signals:

public slots:
    void acceptConnection();
    void onRecvData();

private:
    QTcpServer *server; // 定义一个对象指针
    QTcpSocket *client;
    qint16 package_size;

    QSqlDatabase db;
};

#endif // SERVER_H
