#include "myudp.h"

MyUdp::MyUdp(QObject *parent) :
    QObject(parent)
{
}

// This is to start listening on local system
void MyUdp::doListen(int port)
{
    // Make object
    socket=new QUdpSocket(this);
    // Set host address
    QHostAddress host("127.0.0.1");
    // Bind port number to start listed
    socket->bind(host,port);
    // Connect signals to slots to do something when receieve something
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    qDebug() << "Started listening on :" << host << port;
}
// This is to start writing to remote system
void MyUdp::doSend(QString url, int port, QString msg)
{
    // This is our buffer which we send
    QByteArray qba;
    // Attach msg to it
    qba.append(msg);
    // Make object for socket
    socket=new QUdpSocket(this);
    // Make host object
    QHostAddress host;
    // Read provided host
    host.setAddress(url);
    // Send datagram packet
    socket->writeDatagram(qba,host,port);
    qDebug() << "Sent\n\tMSG :" << msg << "\n\tTo :" << url << ":"<< port;
}
// When someone write something to listening object
void MyUdp::readyRead()
{
    // This is just a count, to test how many packet lost
    static int count;
    // Buffer
    QByteArray qba;
    // Host
    QHostAddress host;
    // Port
    quint16 port;
    // Resize port as per receieved data
    qba.resize(socket->pendingDatagramSize());
    // Read datagram from listener socket
    socket->readDatagram(qba.data(),qba.size(),&host,&port);
    // Show some msg
    qDebug() << count++ << "Data is receieved from :"<< host << ":" << port << "\n\t"<<qba;
}
