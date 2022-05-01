#ifndef MYTHREAD_H
#define MYTHREAD_H
#include<QtCore>
class MyThread:public QThread
{
    Q_OBJECT
public:
    MyThread();
    void run();
    QString *name;
signals:
public slots:
public Q_SLOTS:
};

#endif // MYTHREAD_H
