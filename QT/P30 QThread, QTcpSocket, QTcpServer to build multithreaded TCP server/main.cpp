#include <QtCore/QCoreApplication>
#include "myserver.h"

// This is multi threaded TCP server by QTcpServer
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Create server and start it
    MyServer server;
    server.startServer();
    return a.exec();
}
