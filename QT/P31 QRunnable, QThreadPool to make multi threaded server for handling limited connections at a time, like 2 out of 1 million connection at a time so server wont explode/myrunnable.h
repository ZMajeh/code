#ifndef MYRUNNABLE_H
#define MYRUNNABLE_H

#include <QRunnable>
#include <QObject>
#include <QTcpSocket>

class MyRunnable : public QRunnable
{

public:
    explicit MyRunnable(QObject *tmp=0);
    int id;
    void run();
signals:

public slots:
};

#endif // MYRUNNABLE_H
