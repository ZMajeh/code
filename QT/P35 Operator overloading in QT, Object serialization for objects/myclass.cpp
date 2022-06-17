#include "myclass.h"

// When empty object is created
MyClass::MyClass()
{
}
// When prefilled object is made
MyClass::MyClass(QString name,qint64 age)
{
    this->name=name;
    this->age=age;
}

// Overloading for >>
QDataStream &operator >>(QDataStream &in, MyClass &obj)
{
    in >> obj.name >> obj.age;
    return in;
}

// Overloading for <<
QDataStream &operator<<(QDataStream &out, const MyClass &obj)
{
    out << obj.name << obj.age;
    return out;
}

// Printout object's data
void MyClass::printData()
{
    qDebug() << name << "is" << age << "years old!!";
}
