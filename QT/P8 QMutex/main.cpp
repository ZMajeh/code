#include <QtCore/QCoreApplication>
#include<mythread.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);\
    //Thread have 1 static local variable, each thread tries to increment it.
    MyThread mt1,mt2,mt3,mt4,mt5,mt6;
    mt1.name=new QString("Thread 1");
    mt2.name=new QString("Thread 2");
    mt3.name=new QString("Thread 3");
    mt4.name=new QString("Thread 4");
    mt5.name=new QString("Thread 5");
    mt6.name=new QString("Thread 6");
    mt1.start();
    mt2.start();
    mt3.start();
    mt4.start();
    mt5.start();
    mt6.start();


    system("timeout 5&& cls");
    qDebug()<<"Final value is : "<<MyThread::i;
    //Test
    // if 6 threads try to increment value of i for 100 times, will end resilt will be 599?
    //Yes it works
    // if 6 threads try to increment value of i for 1000 times, will end resilt will be 5999?
    //Yes it works
    // if 6 threads try to increment value of i for 10000 times, will end resilt will be 59999?
    //Yes it works
    // if 6 threads try to increment value of i for 100000 times, will end resilt will be 599999?
    //No, Value will not be the one we needed
    //Solution is to use MUTEX


    //Using MUTEX
    //1. To use Mutex one must include QMutex.h
    //2. To use Mutex one must add mutex object as static
    //3. Steps
    //  a. add static object of QMutex to class
    //  b. Use it to lock, when performing write operation
    //4. TIP: Reading can be done without lock, but writing should be done using lock.

    return a.exec();
}
