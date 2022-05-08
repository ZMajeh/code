#include <QtCore/QCoreApplication>
// QCopy, iterator copy
#include<QVector>
#include<QStringList>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QStringList l;
    for(int i=0;i<10;i++)l<<QString::number(i);
    QVector<QString> v;
    v.resize(20);
    qCopy(l.begin(),l.end(),v.begin()+5);
    foreach(QString i,v)
        qDebug()<<i;
    return a.exec();
}
