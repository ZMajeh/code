#include <QtCore/QCoreApplication>
#include<mythread.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyThread mt1,mt2,mt3;
    mt1.name=new QString("Thread 1");
    mt2.name=new QString("Thread 2");
    mt3.name=new QString("Thread 3");
    mt1.start();
    mt2.start(QThread::LowestPriority);
    mt3.start(QThread::HighestPriority);
    return a.exec();
}
