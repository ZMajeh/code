#include "mythread.h"
#include<QtCore>

MyThread::MyThread()
{
    flag=1;
}
void MyThread::run()
{
    while(true)
    {
        if(flag==0)break;
        //Delay 0.001 sec to see in better look
        msleep(100);
        emit valueChanged();
    }
}
