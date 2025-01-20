#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QDebug>
#include <QThreadPool>
#include "myrunnable.h"

class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit MyServer(QObject *parent = 0);
    void startServer();
signals:

public slots:
    void incomingConnection(int handle);
private:
    QThreadPool *pool;
};

#endif // MYSERVER_H
