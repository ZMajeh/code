#include <QtCore/QCoreApplication>

#include <QVariant>
#include <QDebug>
#include <QString>

#include "customclass.h"

// This is just for output
QString test_n[]={"REAL NUMBER 123.456",
            "INTEGER 123",
        "STRING \"123.456\"",
    "CHARACTER 'a'",
    "Profile Majeh",
    "Profile Hydra",
    "Profile MajehE",
    "Profile HydraE",};

void test(QVariant var)
{
    // Just for output
    static int test_c=0;
    test_c+=1;
    qDebug() << "Test :" << test_c << test_n[test_c-1];

    // Convert varient to Integer if possible, otherwise throw error
    // int
    if(var.canConvert<int>())   // Check if convertable
    {
        qDebug() << "\tint : " << var.toInt();  // Convert
    }
    else
    {
        qDebug() << "\tCant convert to int";
    }

    // Convert varient to Double if possible, otherwise throw error
    // double
    if(var.canConvert<double>())   // Check if convertable
    {
        qDebug() << "\tdouble : " << var.toDouble();  // Convert
    }
    else
    {
        qDebug() << "\tCant convert to double";
    }

    // Convert varient to QString if possible, otherwise throw error
    // QString
    if(var.canConvert<QString>())   // Check if convertable
    {
        qDebug() << "\tQString : " << var.toString();  // Convert
    }
    else
    {
        qDebug() << "\tCant convert to QString";
    }
}

// QVariant basics
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Test QVariant with basic types
    test(123.456);
    test(123);
    test("123.456");
    test('a');

    // Make custom class and create objects for it
    CustomClass Majeh("Majeh","Ninja",468,1,1,1,468,468);
    CustomClass Hydra("Hydra","Palladin",468,1,468,1,468,1);

    // fromValue is static method, used to add customClass to QVariant. returns QVariant object
    QVariant o1=QVariant::fromValue(Majeh);
    QVariant o2=QVariant::fromValue(Hydra);

    // Just for output
    qDebug() << "\n\nWorking on CustomClass\n\n\nBefore extracting :\n";
    Majeh.printPlayerProfile();
    Hydra.printPlayerProfile();

    // value<customClass>() is used to getback original class's object from QVariant
    CustomClass MajehE=o1.value<CustomClass>();
    CustomClass HydraE=o2.value<CustomClass>();

    // Just for output
    qDebug() << "After extracting :\n";
    MajehE.printPlayerProfile();
    HydraE.printPlayerProfile();

    // Check if custom class is convertable to basic types(Not possible!!!)
    test(QVariant::fromValue(Majeh));
    test(QVariant::fromValue(Hydra));
    test(QVariant::fromValue(MajehE));
    test(QVariant::fromValue(HydraE));

    return a.exec();
}
