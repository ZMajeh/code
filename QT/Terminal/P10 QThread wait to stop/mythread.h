#ifndef MYTHREAD_H
#define MYTHREAD_H
#include<QThread>
#include<QDebug>

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread();
    void run();
};

#endif // MYTHREAD_H
