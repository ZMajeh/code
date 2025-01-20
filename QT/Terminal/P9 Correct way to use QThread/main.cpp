#include <QtCore/QCoreApplication>
#include<QThread>
#include<myobject.h>
#include<QDebug>

int main(int argc, char *argv[])
{
    /*
        Better way for thread
        1 QObject to execute something(Like runnable).
        2 QThread on which we are gonna run object
        3 Connect QObject with QThred, using signal started and stot ANY_HAND_MADE
        4 use moveToThread method of QObject to perform execution in background
        5 call start, so execution starts
    */
    QCoreApplication a(argc, argv);
    MyObject o1,o2,o3,o4,o5,o6;
    QThread t1,t2,t3,t4,t5,t6;
    QMutex mux;
    o1.initObject(t1,"1",&mux);
    o2.initObject(t2,"2",&mux);
    o3.initObject(t3,"3",&mux);
    o4.initObject(t4,"4",&mux);
    o5.initObject(t5,"5",&mux);
    o6.initObject(t6,"6",&mux);

    o1.moveToThread(&t1);
    o2.moveToThread(&t2);
    o3.moveToThread(&t3);
    o4.moveToThread(&t4);
    o5.moveToThread(&t5);
    o6.moveToThread(&t6);

    t1.start();
    t2.start();
    t3.start();
    t4.start();
    t5.start();
    t6.start();
//    for(int i=0;i<100000;i++)
//    {
//        qDebug()<<QString::number(i)+"Main";
//        //system("timeout 1");
//        if(o1.done&&o2.done&&o3.done&&o4.done&&o5.done&&o6.done)
//            break;
//    }
//    qDebug()<<"Done";

    return a.exec();
}
