#include "mythread.h"
#include<QtCore>

MyThread::MyThread()
{

}
void MyThread::run()
{
    for(int i=0;i<10000;i++)
        qDebug() <<"Thread : " <<*name<<"\t Number : "<<i;
}
