#include "myserver.h"

// To create server, just create object, connect signal to slot and start to listen on it
MyServer::MyServer(QObject *parent) :
    QObject(parent)
{
    // Object creation
    server=new QTcpServer(this);
    // Connect signal to slot, to process connection  we get
    connect(server,SIGNAL(newConnection()),this,SLOT(newConnection()));
    // Start to listen on any port
    if(!server->listen(QHostAddress::Any,1234))
    {
        // When connection fail
        qDebug() << "Could not start server";
    }
    else
    {
        // On successful connection
        qDebug() << "Server started on port 1234";
    }
}


void MyServer::newConnection()
{
    // When any client connects
    QTcpSocket *socket= server->nextPendingConnection();
    // We can perform any operation on it
    socket->write("Thanks for connecting Majeh's system\r\n\r\n");
    // Wait for write as we perform write
    if(!socket->waitForBytesWritten(3000))
        // If couldn't write
        qDebug() << "Could not write to connection";
    // When write is success
    else qDebug() << "Write success to connection from :" << socket->peerAddress().toString();
    // This closes remote connection.
    socket->close();
}
