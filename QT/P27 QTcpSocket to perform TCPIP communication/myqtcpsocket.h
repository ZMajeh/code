#ifndef MYQTCPSOCKET_H
#define MYQTCPSOCKET_H

#include <QObject>
#include <QTcpSocket>

class myQTcpSocket : public QObject
{
    Q_OBJECT
public:
    explicit myQTcpSocket(QObject *parent,QString url,int port, QString msg);
    void drive(QString url,int port, QString msg);
signals:

public slots:
private:
    QTcpSocket *mySoc;

};

#endif // MYQTCPSOCKET_H
