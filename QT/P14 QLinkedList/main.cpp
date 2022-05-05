#include <QtCore/QCoreApplication>
#include<QDebug>
#include<QLinkedList>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QLinkedList<int> l;
    qDebug()<<"Method 1: using append";
    for(int i=0;i<10;i++)
    {
        l.append(i);
    }
    foreach(int i,l)qDebug()<<i;


    qDebug()<<"\nMethod 2: using <<";
    l.clear();
    for(int i=0;i<10;i++)
    {
        l<<i;
    }

    foreach(int i,l)qDebug()<<i;
    qDebug()<<"\nGet last back() : "<<l.back();
    qDebug()<<"Get first front() : "<<l.front();
    qDebug()<<"Get length size() : "<<l.size();
    qDebug()<<"Get length count() : "<<l.count();
    qDebug()<<"Get how many 1 count(1) : "<<l.count(1);
    qDebug()<<"Get how many 11 count(11) : "<<l.count(11);

    qDebug()<<"\nClear() to clean list : ";
    l.clear();
    qDebug()<<"\nRemaining elements : "<<l.size()<<l.count();
    for(int i=0;i<10;i++)
    {
        l<<i;
    }
    foreach(int i,l)qDebug()<<i;

    qDebug()<<"\nInsert 11 after begining : l.insert(l.begin(),11)";
    l.insert(l.begin(),11);
    foreach(int i,l)qDebug()<<i;
    qDebug()<<"\nInsert 11 after end : l.insert(l.end(),11)";
    l.insert(l.end(),11);
    foreach(int i,l)qDebug()<<i;
    qDebug()<<"\nFind 10 : l.contains(10) : "<<l.contains(10);
    qDebug()<<"\nFind 10 : l.contains(11) : "<<l.contains(11);
    qDebug()<<"\nIs empty : l.empty() : "<<l.empty();
    qDebug()<<"\nIs empty : l.isEmpty() : "<<l.isEmpty();
    l.clear();
    qDebug()<<"\nAfter clear is empty : l.empty() : "<<l.empty();
    qDebug()<<"\nAfter clear is empty : l.isEmpty() : "<<l.isEmpty();






    return a.exec();
}
