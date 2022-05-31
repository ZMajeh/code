#include <QtCore/QCoreApplication>
#include "myserver.h"

// Making async server, where huge tasks of server are performed on background thread
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Make and start server
    MyServer server;
    server.startServer();
    return a.exec();
}
