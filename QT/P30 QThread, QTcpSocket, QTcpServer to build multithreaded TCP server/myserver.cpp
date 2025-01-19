#include "myserver.h"

MyServer::MyServer(QObject *parent) :
    QTcpServer(parent)
{
}
// Starting server
void MyServer::startServer()
{
    // Start to listen on port 1234
    if(!this->listen(QHostAddress::Any,1234))
    {
        // On fail
        qDebug() << "Could not listen";
    }
    else
    {
        // on success
        qDebug() << "started listening on 1234";
    }
}

// When any new connection is came in
void MyServer::incomingConnection(int handle)
{
    // Show some msg
    qDebug() << handle << "connecting...";
    // Create thread for connection
    MyThread *t=new MyThread(handle,this);
    // Connect this signal to slot so it will delete on execution
    connect(t,SIGNAL(finished()),t,SLOT(deleteLater()));
    // Start thread
    t->start();
}
