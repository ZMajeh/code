#include <QtCore/QCoreApplication>
#include<myqtcpsocket.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    myQTcpSocket obj(NULL,"google.com",80,"Hello world!");
    return a.exec();
}
