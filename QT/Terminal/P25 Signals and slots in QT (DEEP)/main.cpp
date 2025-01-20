#include <QtCore/QCoreApplication>

#include "driver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    driver obj; // Starts here
    return a.exec();
}
