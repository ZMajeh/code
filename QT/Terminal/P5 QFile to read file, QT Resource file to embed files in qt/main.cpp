#include <QtCore/QCoreApplication>
#include<QFile>
#include<QString>
#include<QDebug>
#include<QTextStream>

QString * readFile(QString file)
{
    QFile *fd=new QFile(file);
    if(!fd->open(QFile::ReadOnly|QFile::Text))
    {
        qDebug()<<"File could not be opened";
        return NULL;
    }
    QTextStream *qts=new QTextStream(fd);
    QString *output=new QString(qts->readAll());
    qDebug()<<*output;
    fd->close();
    return output;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString *fileContaints=readFile(":/myFile/P5.pro");

    return a.exec();
}
