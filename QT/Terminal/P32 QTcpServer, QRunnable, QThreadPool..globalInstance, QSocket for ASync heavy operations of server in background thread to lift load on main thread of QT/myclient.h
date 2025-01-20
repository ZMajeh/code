#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include "myrunnable.h"
#include <QThreadPool>

class MyClient : public QObject
{
    Q_OBJECT
public:
    explicit MyClient(QObject *parent = 0);
    void setSocket(int);
signals:

public slots:
    void connected();
    void disconnected();
    void readyRead();
    void resultOut(int);
private:
    QTcpSocket *socket;
};

#endif // MYCLIENT_H
