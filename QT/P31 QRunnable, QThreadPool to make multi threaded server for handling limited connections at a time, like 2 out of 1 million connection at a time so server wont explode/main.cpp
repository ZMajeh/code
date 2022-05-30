#include <QtCore/QCoreApplication>
#include "myserver.h"
// Pool is used when you want to limit incomming connections
// Here 2 is set as limit, so 3rd and latter connections will go in waiting state
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Start server
    MyServer ms;
    ms.startServer();
    return a.exec();
}
