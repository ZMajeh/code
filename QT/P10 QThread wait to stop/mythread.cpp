#include "mythread.h"

MyThread::MyThread()
{
}

void MyThread::run()
{
    for(int i=0;i<1000;i++)
        qDebug()<<"\n"<<QString::number(i);
}
