#include <QtCore/QCoreApplication>
#include<QDebug>
#include<QList>

// qSort to sort by iterator or container
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> l;
    for(int i=9;i>-1;i--)l.append(i);
    qDebug()<<"Initial";
    foreach(int i,l)qDebug()<<i;
    qSort(l);
    qDebug()<<"Sorting";
    foreach(int i,l)qDebug()<<i;

    QList<int> l1;
    for(int i=9;i>-1;i--)l1.append(i);
    qDebug()<<"Initial";
    foreach(int i,l1)qDebug()<<i;
    qSort(l1.begin()+2,l1.end()-2);
    qDebug()<<"Sorting exceprt first and last 2";
    foreach(int i,l1)qDebug()<<i;


    return a.exec();
}
