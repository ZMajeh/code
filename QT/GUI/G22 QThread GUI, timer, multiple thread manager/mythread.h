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
    int flag;
signals:
    void valueChanged();
};

#endif // MYTHREAD_H
