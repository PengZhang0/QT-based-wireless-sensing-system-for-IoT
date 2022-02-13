#include <QCoreApplication>
#include <server.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Server *servers = new Server();

    return a.exec();
}
