#include <QtCore/QCoreApplication>

#include<QDebug>
#include<QList>

// qFind returns iterator for found location, otherwise end() is returned
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int>l;
    for(int i=0;i<10;i++)l.append(i);

    QList<int>::const_iterator iter=qFind(l,5);

    qDebug()<<"Greater than 5\nIterator\t integer add\t int";
    for(;iter!=l.end();iter++)
        qDebug()<< &(iter) << &(*iter) << *iter;


    return a.exec();
}
