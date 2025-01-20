#include "myclient.h"

MyClient::MyClient(QObject *parent) :
    QObject(parent)
{
    // How many background operations to perform at a time
    QThreadPool::globalInstance()->setMaxThreadCount(2);
}

// This will init client
void MyClient::setSocket(int id)
{
    // Make socket for connect
    socket=new QTcpSocket(this);
    // Obtain by socket descriptor
    socket->setSocketDescriptor(id);
    // Connect signals to slots
    connect(socket,SIGNAL(connected()),this,SLOT(connected()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()));
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    // Formality for new connection connected
    qDebug() << "Client"<<id<<"connected";
}

// When conncted, but here we do not connect, we just obtain preexisting connection, so this will never run
void MyClient::connected()
{
    qDebug() << "Client connected event";
}

// When disconnected from connection
void MyClient::disconnected()
{
    qDebug() << "Client"<<socket->socketDescriptor()<<"disconnected";
}

// When ready to read from client
void MyClient::readyRead()
{
    // As soon as client put some data in buffer, this method is called
    // Read all data
    qDebug() << socket->socketDescriptor() << ": "<< socket->readAll();
    // Time consuming operation here on seperate thread
    // So call it in background thread, by our own runnable
    myRunnable *run=new myRunnable(socket->socketDescriptor());
    // Delete the thread once out of this current block and finished executing
    run->setAutoDelete(true);
    // This is to get result from our runnable, so its a result from background thread to our main thread
    connect(run,SIGNAL(genResult(int)),this,SLOT(resultOut(int)),Qt::QueuedConnection);
    // Start thred for our heavy task(Can be anything)
    QThreadPool::globalInstance()->start(run);
}

// When result is generated
void MyClient::resultOut(int data)
{
    // Send it back to client, or do any other operation, like save in DB as record, then send back or even forward to some other server
    qDebug() << "Result for client"<<socket->socketDescriptor()<<"is"<<data<<".";
    socket->write(QString("Result for client "+QString::number(socket->socketDescriptor())+" is "+QString::number(data)+".\r\n").toAscii());
    socket->flush();
}
