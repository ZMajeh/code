#include "myqtcpsocket.h"

myQTcpSocket::myQTcpSocket(QObject *parent,QString url,int port, QString msg) :
    QObject(parent)
{
    drive(url,port,msg);
}
// QTcpSocket is easy
void myQTcpSocket::drive(QString url,int port, QString msg)
{
    // Make object
    mySoc=new QTcpSocket(this);
    // Call connection
    mySoc->connectToHost(url,port);
    if(mySoc->waitForConnected(3000))   // Wait for connection
    {
        qDebug() << "connected to"<<url<<"and writing data";
        mySoc->write((msg+"\r\n").toAscii());   // Easily can write to tcp connection '\r\n' is needed for TCPIP connection to consider as end of line
        if(mySoc->waitForBytesWritten(3000))    // Wait for write
        {
            mySoc->waitForReadyRead(3000);      // Wait till it prepare read
            qDebug() << "Write success and reading :"<<mySoc->bytesAvailable()<<"bytes: \n\n"; // Fetch size
            qDebug() << mySoc->readAll();   // Or just fetch all data
        }
        else
        {
            // On write fail
            qDebug() << "write fail";
        }

    }
    else
    {
        // On connection fail
        qDebug() << "Connection fail";
    }

}
