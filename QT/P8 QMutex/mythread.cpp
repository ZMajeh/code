#include "mythread.h"
#include<QtCore>
#include<QMutex>
int MyThread::i;
QMutex MyThread::mutex;
MyThread::MyThread()
{

}
//Slow compared to other one
//First thread, we can say NUB thread
//void MyThread::Run()
//{

//    for(int j=0;j<100000;j++)
//    {
//        mutex.lock();
//        i=i+1;
//        mutex.unlock();
//    }
//    qDebug() <<"Thread : " <<*name<<"\t Number : "<<i;
//}


//Optimized, Genious thread
/* To do so,
    Add local temp storage for thread
    And insted of writting whole thing to output each time, send output in chunks
    So simply putting, it reduce time of execution by 10 times.
    Still slow, as we still locking to store data
    Before:
       1 lock
       1 store
       1 unlock
     TIME:
        for 1: 3
        for 100: 300
        for 100000:300000
    Now:
       1 increment
       for each 100
        1 lock
        1 store
        1 unlock
     Time:
        for 1: 3
        for 100: 103
        for 1000: 1030
        for 100000: 103000

    Before: only 1 thread was executing for each time
    Now: 6 threads execute 100 times then stop to update data, so
         for 100000: 103000/6 = 17166
            which is 300000/17166 == almost 17 times faster
*/
//void MyThread::run()
//{
//    int k=0;  //Local storage for thread
//    //Lets say chunk size is 100, so inted of shifting data to static for each increment, we do it for each 100
//    for(int j=0;j<100000;j++)
//    {
//        k++;
//      if(k%100==0)
//        {
//          mutex.lock();
//          i=i+k;    //Shift chunk of data to i
//          mutex.unlock();
//          //Clear local data
//          k=0;
//        }
//    }
//    qDebug() <<"Thread : " <<*name<<"\t Number : "<<i;
//}


//God thread, Need space, and 1 thread will never block other thread, untill it executes completely.
//This is fastest, only used when Memory is not a problem, all threads will store everything in local space, untill work is done
//When work is done, then it store it to shared space(here static int i)
void MyThread::run()
{
    int k=0;  //Local storage for thread
    //Lets say chunk size is 100, so inted of shifting data to static for each increment, we do it for each 100
    for(int j=0;j<100000;j++)k++;
    mutex.lock();
    i=i+k;    //Shift chunk of data to i
    mutex.unlock();
    //Clear local data
    k=0;

    qDebug() <<"Thread : " <<*name<<"\t Number : "<<i;
}



//NOTE to remember:
/* Mutex lock and unlock is expensive operation,
    so adding number 1000 times is almost equal to locking 1 Mutex,
    Because, mutex lock, will block all other threads to do same operation, so keep lock section as small as possible
    So Above optimizations will improve speed, almost 100 to 1000 times, from First thread*/
