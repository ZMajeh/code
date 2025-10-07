#include <QtCore/QCoreApplication>
#include<QString>
#include<QFile>
#include<QDebug>
#include<iostream>
#include<QTextStream>

void readFile(QString file)
{
    QFile fd1(file);
    if(!fd1.open(QFile::ReadOnly|QFile::Text))
    {
        qDebug()<<"Unable to open file";
        return;
    }
    QTextStream qts1(&fd1);
    qDebug()<<"File contains: ";
    QString out=qts1.readAll();
    qDebug()<<out;
}
void writeFile(QString file)
{
    QFile fd1(file);
    if(!fd1.open(QFile::WriteOnly|QFile::Text))
    {
        qDebug()<<"Unable to open file";
        return;
    }
    qDebug()<<"Enter something to write to file";
    char buff[100];
    std::cin>>buff;
    QTextStream qts1(&fd1);
    qts1<<buff;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    writeFile("data");
    readFile("data");
    return a.exec();
}
