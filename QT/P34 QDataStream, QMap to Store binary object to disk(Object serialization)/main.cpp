#include <QtCore/QCoreApplication>

#include <QMap>
#include <QDebug>
#include <QFile>
#include <QDataStream>
#include <QString>

// Object serialization is storing binary object to file, and using it latter by just loading it

// Saving object to file
void save()
{
    // Create objects we want to store
    int number=62;
    QMap<qint64,QString> myMap;
    myMap.insert(1,"First");
    myMap.insert(2,"Second");
    myMap.insert(3,"Third");

    // Create file to which we want to store
    QFile myFile("mySavedData.dat");

    // Open file in write mode
    if(!myFile.open(QIODevice::WriteOnly))
    {
        qDebug() << "Error opening file to write";
        exit(1);
    }

    // Create data stream to store object
    QDataStream myStream(&myFile);
    myStream.setVersion(QDataStream::Qt_4_7);

    // Writing object
    myStream << number << myMap;

    /* Stored file will  look like this:
   >          
 T h i r d           S e c o n d       
 F i r s t
    */

    // Save changes to file and close
    myFile.flush();
    myFile.close();
}

// Loading stored object from disk
void load()
{
    // Create empty objects, where we are going to read data
    int number;
    QMap<qint64,QString> myMap;

    // Locate stored file
    QFile myFile("mySavedData.dat");

    // Open file in reading mode
    if(!myFile.open(QIODevice::ReadOnly))
    {
        qDebug() << "Error opening file to read";
        exit(1);
    }

    // Open data stream to read object
    QDataStream myStream(&myFile);
    myStream.setVersion(QDataStream::Qt_4_7);

    // Read object
    myStream >> number >> myMap;

    // Display object to output as proof of reading
    qDebug() << "Reading stored object from file\nMagic number is :"<<number<<"\nStored map data : ";
    foreach(QString item, myMap.values())
    {
        qDebug() << item;
    }

    // Save changes and close
    myFile.flush();
    myFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    save();
    load();
    return a.exec();
}
