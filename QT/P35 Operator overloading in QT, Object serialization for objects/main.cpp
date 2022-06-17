#include <QtCore/QCoreApplication>

#include "myclass.h"
#include <QFile>
#include <QIODevice>

// Write personally creted class to file

// To write to file
void write(QString fileName)
{
    // Create object of our class
    MyClass obj1("Majeh",25),obj2("Hydra",22);

    // Create file object
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Error opening file";
        exit(1);
    }

    // Create datastream for file
    QDataStream myDataStream(&file);
    myDataStream.setVersion(QDataStream::Qt_4_7);

    // Need to overload << in our class
    myDataStream << obj1 << obj2;

    // Close file
    file.flush();
    file.close();
}

// To read from file
void read(QString fileName)
{
    // Create object of our class, no need to init here
    MyClass obj1,obj2;

    // Create file object
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Error opening file";
        exit(1);
    }

    // Create datastream for file
    QDataStream myDataStream(&file);
    myDataStream.setVersion(QDataStream::Qt_4_7);

    // Need to overload >> in our class
    myDataStream >> obj1 >> obj2;

    // Print read info
    obj1.printData();
    obj2.printData();

    // Close file
    file.flush();
    file.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    write("MyFile.dat");
    read("MyFile.dat");
    return a.exec();
}
