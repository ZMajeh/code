#include <QtCore/QCoreApplication>
#include<QDebug>
#include<iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qDebug()<<"Hello world";
    std::cout<<"Hello world from c++";
    return a.exec();
}
