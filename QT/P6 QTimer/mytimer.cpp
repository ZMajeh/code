#include "mytimer.h"
#include<QDebug>


MyTimer::MyTimer(int time)
{
    timer=new QTimer(this);     //Create timer object
    timer->setInterval(time);   //Set loop interval in ms(how much time after to repeat)
    timer->start();             //Must start the timer

    //This method is called when timeout occured
    //Time out occurs when one interval is over
    connect(timer,SIGNAL(timeout()),this,SLOT(post()));
}

void MyTimer::stop()
{
    //This is used to stop post loop
    if(timer!=NULL)
    {
        timer->stop();
    }
}

void MyTimer::post()
{
    //This is the method which will be called after creating object normally
    qDebug() << "Event is triggered";
}
