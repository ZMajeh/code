#include "myrunnable.h"


myRunnable::myRunnable(int handle)
{
    // Set id for thread
     id=handle;
}

// This is our heavy task, example can be (Data processing, video conversion, data compression, any time consuming task)
void myRunnable::run()
{
    // This can be any time consuming task
    qDebug() << "Running background task for"<<id;
    int res=1;
    for(int i=1;i<100000;i++)res+=i;
    qDebug() << "Background task finished for"<<res;
    // emit signal so our result is sent to main thread
    emit genResult(res);
}
