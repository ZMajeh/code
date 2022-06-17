#ifndef MYCLASS_H
#define MYCLASS_H

#include <QDataStream>
#include <QDebug>
#include <QString>

// This is my class with 2 data member and 2 constructor and 1 member function
class MyClass
{
public:
    QString name;
    qint64 age;
public:
    MyClass();
    MyClass(QString,qint64);
    void printData();
};
// This is overloaded functions for << and >>
QDataStream &operator>>(QDataStream &in, MyClass &obj);
QDataStream &operator<<(QDataStream &out, const MyClass &obj);

#endif // MYCLASS_H
