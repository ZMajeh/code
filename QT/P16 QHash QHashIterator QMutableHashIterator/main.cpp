#include <QtCore/QCoreApplication>
#include<QDebug>
#include<QHash>

int main(int argc, char *argv[])
{

    //Only difference is LOOKUP time is almost 0
    QCoreApplication a(argc, argv);
    QHash<int,QString> l;
    l[1]="Anand";
    l.insert(2,"Vijay");
    l.insert(3,"Carl");
    l.insert(4,"Maya");
    l.insert(5,"Sandy");
    l.insert(6,"Johny");
    l.insert(7,"Test");

     qDebug()<<"Initial MAP";
    foreach(int x,l.keys())
    {
        qDebug()<<l[x];
    }
    qDebug()<<"\nChange 3 to Nick with [key]=value\nChange 4 to Kaya with insert(Key,Value)\nDiplicate 7 with insertMulti to Wick";
    l[3]="Nick";
    l.insert(4,"Kaya");
    l.insertMulti(7,"Wick");
    foreach(int x,l.keys())
    {
        qDebug()<<l[x];
    }
    qDebug()<<"\nPrint by for iterator";
    for(QHashIterator<int,QString> iter(l);iter.hasNext();)
    {
        iter.next();
        qDebug()<<iter.key()<<" : "<<iter.value();
    }

    qDebug()<<"\nModify 7, GOD, using [key]=value";
    l[7]="GOD";
    for(QHashIterator<int,QString> iter(l);iter.hasNext();)
    {
        iter.next();
        qDebug()<<iter.key()<<" : "<<iter.value();
    }

    qDebug()<<"\nModify 7, Devil, using QMutableMapIteratr";
    l[7]="GOD";
    for(QMutableHashIterator<int,QString> iter(l);iter.hasNext();)
    {
        iter.next();
        if(iter.key()==7)
        {
            iter.setValue("Devil");
        }
        qDebug()<<iter.key()<<" : "<<iter.value();
    }
    qDebug()<<"\nPrint using value()";
    foreach(int x,l.keys())
    {
        qDebug() << x << " : " << l.value(x);
    }
    qDebug()<<"\nPrint using key()";
    foreach(QString x,l.values())
    {
        qDebug() << l.key(x) << " : " << x;
    }


    return a.exec();
}
