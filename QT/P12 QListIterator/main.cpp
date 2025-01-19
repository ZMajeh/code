#include <QtCore/QCoreApplication>
#include<QList>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> l;
    //init
    for(int i=0;i<10;i++)
        l.append(i);
    QListIterator<int> iter(l);
    //Forward
    qDebug()<<"Forward";
    iter.toFront();
    while(iter.hasNext())
        qDebug()<<iter.next();

    //Previous
    qDebug()<<"Backward";
    iter.toBack();
    while(iter.hasPrevious())
        qDebug()<<iter.previous();

    //By peek
    qDebug()<<"Peek";
    iter.toFront();
    while(iter.hasNext())
    {
        qDebug()<<"\nPrevious .... "<< iter.peekPrevious();
        qDebug()<<"CUR: "<<iter.next();
        qDebug()<< "Next .... " << iter.peekNext();
    }

    qDebug()<<"Find next 5 from begining";
    iter.toFront();
    qDebug()<<iter.findNext(5);

    qDebug()<<"Find next 5 from ending";
    iter.toBack();
    qDebug()<<iter.findNext(5);


    qDebug()<<"Find Previous 5 from begining";
    iter.toFront();
    qDebug()<<iter.findPrevious(5);

    qDebug()<<"Find Previous 5 from ending";
    iter.toBack();
    qDebug()<<iter.findPrevious(5);





    return a.exec();
}
