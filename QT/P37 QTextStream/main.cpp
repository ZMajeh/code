#include <QtCore/QCoreApplication>

#include <QDebug>
#include <QIODevice>
#include <QTextStream>
#include <QFile>

void write()
{
    QFile myFile("MyFile.dat");
    if(myFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream myStream(&myFile);
        myStream << "Hello world!!!\r\n";
        myStream << "Hello from MAJEH!!!\r\n";

        myFile.flush();
        myFile.close();
    }
}

void read()
{
    QFile myFile("MyFile.dat");
    if(myFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream myStream(&myFile);

        QString line;
        do
        {
            line = myStream.readLine();
            qDebug() << line;
        }while(line!=NULL);

        myFile.close();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    write();
    read();

    return a.exec();
}
