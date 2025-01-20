#include "mythread.h"

// Creating new thread
MyThread::MyThread(int handle,QObject *parent) :
    QThread(parent)
{
    // This will work as ID for client connection
    this->handle=handle;
}

// Thread execution start here
void MyThread::run()
{
    // Some msg
    qDebug() << "Starting thread";
    // Create socket to handle connection
    socket=new QTcpSocket();
    // Set ID for socket
    if(!socket->setSocketDescriptor(handle))
    {
        // On fail to set ID, just exit with error
        emit error(socket->error());    // This is error signal
        return;
    }
    // Connect Signal to slot
    // When ready to read handle
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()),Qt::DirectConnection);
    // When disconnected handle
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()),Qt::DirectConnection);
    // Some msg
    qDebug() << handle << "client connected";
    // Go in MSG loop, so it wont terminate
    exec();
}

// When ready to read
void MyThread::readyRead()
{
    // Read data
    QByteArray Data=socket->readAll();
    // When bufffer is empty, give instant reply
    if(buffer=="")
        socket->write(Data);
    // This is char to identify when to stop receiving data and processss buffer
    if(Data=="~")
    {
        // We just print buffer
        qDebug() << handle << "Data in :"<<buffer;
        // We echo buffer back
        socket->write(buffer.toAscii());
        // Cleans buffer
        buffer="";
    }
    // When not identity sent
    else
        buffer+=Data;
}

// When disconnected is signaled
void MyThread::disconnected()
{
    // Show MSG
    qDebug() << handle << "disconnected";
    // Move thread to unused list
    socket->deleteLater();
    // Send exit signal as we put thread in MSG loop
    exit(0);
}
