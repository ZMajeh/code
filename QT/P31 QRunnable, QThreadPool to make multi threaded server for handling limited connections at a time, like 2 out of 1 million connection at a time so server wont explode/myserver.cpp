#include "myserver.h"

MyServer::MyServer(QObject *parent) :
    QTcpServer(parent)
{
}
// Start server
void MyServer::startServer()
{
    // Start listen
    if(!this->listen(QHostAddress::Any,1234))
    {
        // On fail
        qDebug() << "Error starting server";
    }
    else
    {
        // On success
        qDebug() << "Server started";
    }
    // This is pool
    pool=new QThreadPool(this);
    // Limit can be anything, so at max process 2 request and others go to waiting queue
    pool->setMaxThreadCount(2);
}

// When new connection comes in
void MyServer::incomingConnection(int handle)
{
    // Create runnable for our request
    MyRunnable *runnable=new MyRunnable();
    // This will determine, if to remove thread on execution or not
    runnable->setAutoDelete(true);
    // This is ID for socket
    runnable->id=handle;
    // This is how we start runnable
    pool->start(runnable);
}
