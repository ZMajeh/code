#include "myobject.h"
#include<QDebug>
int MyObject::data;
MyObject::MyObject(QObject *parent) :
    QObject(parent)
{
}

void MyObject::initObject(QThread &tmp,QString name,QMutex *mux)
{
    //Init thread, connect is only manditory here
    this->mux=mux;
    done=false;
    connect(&tmp,SIGNAL(started()),this,SLOT(startThread()));
    this->name=name;
    runningThread=&tmp;
}

void MyObject::startThread()
{
    //Normal optimized thread run with mutex for 100 buffer
    int tmp=0;
    for(int i=0;i<100000;i++,tmp++)
    {
        if(tmp%100==0)//100 is buffer
        {
            mux->lock();
                data+=tmp;
            mux->unlock();

            tmp=0;
        }
    }
    //If buffer is not empty
    mux->lock();
        data+=tmp;
        qDebug()<<"\n"+name+". : "<<QString::number(data);
    mux->unlock();
    tmp=0;
    done=true;
}
