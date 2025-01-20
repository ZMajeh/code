#include "myserver.h"

MyServer::MyServer(QObject *parent) :
    QTcpServer(parent)
{
}
// STarting server
void MyServer::startServer()
{
    if(!this->listen(QHostAddress::Any,1234))
    {
        // Fail to start server
        qDebug() << "Server could not start";
    }
    else
    {
        // Server started
        qDebug() << "Server started";
    }
}

// When client connected
void MyServer::incomingConnection(int handle)
{
    // Make new client for each new incomming onnection
    MyClient *mc=new MyClient(this);
    // This will init client, where handle will help to obtain new incomming connection
    mc->setSocket(handle);
    //mc->deleteLater();
}
