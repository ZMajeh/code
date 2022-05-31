#ifndef MYRUNNABLE_H
#define MYRUNNABLE_H

#include <QRunnable>
#include <QObject>
#include <QDebug>

class myRunnable : public QObject, public QRunnable
{
    Q_OBJECT
public:
    myRunnable(int);
    //myRunnable(){}
    int id;
    void run();
signals:
    void genResult(int);
public slots:
};

#endif // MYRUNNABLE_H
