#include <QtCore/QCoreApplication>
#include "myudp.h"

// This code tests UDP sending and receiving data in QT
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Make objects and perform
    MyUdp sender,receiever;
    receiever.doListen(1234);
    sender.doSend("127.0.0.1",1234,"Hello, this is msg from ZMajeh");
    return a.exec();
}
