#ifndef MYUDP_H
#define MYUDP_H

#include <QObject>
#include <QDebug>
#include <QUdpSocket>
#include <QString>

class MyUdp : public QObject
{
    Q_OBJECT
public:
    explicit MyUdp(QObject *parent = 0);
    void doListen(int port);
    void doSend(QString url,int port,QString msg);
signals:

public slots:
    void readyRead();
private:
    QUdpSocket *socket;
};

#endif // MYUDP_H
