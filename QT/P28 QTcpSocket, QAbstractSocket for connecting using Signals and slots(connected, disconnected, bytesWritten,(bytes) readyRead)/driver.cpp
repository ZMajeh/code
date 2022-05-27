#include "driver.h"

driver::driver()
{
}


void driver::drive()
{
    // Create socket
    socket = new QTcpSocket(this);
    // Connect signals to slots
    connect(socket,SIGNAL(connected()),this,SLOT(connected()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()));
    connect(socket,SIGNAL(bytesWritten(qint64)),this,SLOT(bytesWritten(qint64)));
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    qDebug() << "Connecting...";
    // Provide host name
    socket->connectToHost("www.google.com",80);
    // Wait untill its connected
    if(!socket->waitForConnected(1000))
        // Unable to connect to host
        qDebug() << "Error connecting :" << socket->errorString();

}

void driver::connected()
{
    // Now connected
    qDebug() << "Connected";
    // This is HTTP request to get Header
    socket->write("HEAD / HTTP/1.0\r\n\r\n\r\n");
    // Wait untill we write command
    if(!socket->waitForBytesWritten(1000))
    {
        // Unable to write to socket
        qDebug() << "Error writting :" << socket->errorString();
    }
}

void driver::disconnected()
{
    // When disconnect from socket
    qDebug() << "Disconnected";
}

void driver::bytesWritten(qint64 bytes)
{
    // When something is written
    qDebug() << "Data bytes written :"<< bytes;
    // Wait for read is ready
    if(!socket->waitForReadyRead(1000))
    {
        // When couldn't get ready to read
        qDebug() << "Error reading :" << socket->errorString();
    }
}

void driver::readyRead()
{
    // When ready to read
    qDebug() << "Data is reading :";
    // Read all output by reaadAll method
    qDebug() << socket->readAll();
}
