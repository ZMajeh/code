#include <QtCore/QCoreApplication>
#include<QDebug>
#include<QVector>

// qFill to initilise container by iterator
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<int> v;
    v.resize(20);
    qFill(v,100);                       // Unconditional fill
    qFill(v.begin()+5,v.end()-5,777);   // Fill except first and last 5
    foreach(int x,v)qDebug()<<x;
    return a.exec();
}
