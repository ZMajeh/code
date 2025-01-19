#include <QtCore/QCoreApplication>
#include<QDebug>
#include <QList>

// QMutableListIterator can modify values on the go
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> l;
    for(int i=0;i<10;i++)
        l.append(i);
    QMutableListIterator<int> iter(l);

    qDebug()<<"Print";
    iter.toFront();
    while(iter.hasNext())
        qDebug()<<iter.next();

    qDebug()<<"Delete greater than 7";
    iter.toFront();
    while(iter.hasNext())
    {
        int tmp=iter.next();
        if(tmp>7)iter.remove();
        else qDebug()<<tmp;
    }
    qDebug()<<"Delete less than 5";
    iter.toFront();
    while(iter.hasNext())
    {
        int tmp=iter.next();
        if(tmp<5)iter.remove();
        else qDebug()<<tmp;
    }

    qDebug()<<"Change remaining values to -1";
    iter.toFront();
    while(iter.hasNext())
    {
        iter.next();
        iter.setValue(-1);
        qDebug()<<-1;
    }
    return a.exec();
}
