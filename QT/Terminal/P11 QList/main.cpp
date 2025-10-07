#include <QtCore/QCoreApplication>
#include<QList>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> l;
    for(int i=0;i<10;i++)
        l.append(i);

    foreach(int num,l)
        qDebug()<<num;
    l.removeOne(3);
    qDebug()<<"Remove one 3";
    foreach(int num,l)
        qDebug()<<num;
    l.removeAt(0);
    qDebug()<<"Remove at 0";
    foreach(int num,l)
        qDebug()<<num;
    l.removeFirst();
    qDebug()<<"Remove first";
    foreach(int num,l)
        qDebug()<<num;
    l.removeLast();
    qDebug()<<"Remove last";
    foreach(int num,l)
        qDebug()<<num;
    l.removeAll(2);
    qDebug()<<"Remove all 2";
    foreach(int num,l)
        qDebug()<<num;
    l.clear();
    qDebug()<<"clear";
    foreach(int num,l)
        qDebug()<<num;

    qDebug()<<"List is empty";






    return a.exec();
}
