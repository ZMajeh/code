#include <QtCore/QCoreApplication>
#include<QDebug>
#include<QStringList>

// QStringList with QString
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QStringList l;
    QString first="a,b,c,d,e,f,g,h,i";
    qDebug()<<first;
    l=first.split(",");

    foreach(QString i,l)
        qDebug()<<i;
    QString last=l.join(":");
    qDebug()<<last;

    return a.exec();
}
