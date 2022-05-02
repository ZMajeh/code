#include <QtCore/QCoreApplication>

#include<mythread.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyThread mt;
    mt.start();

    //Wait will make program wait untill thread is executed
    mt.wait();
    qDebug()<<"Program ended";
    return a.exec();
}
