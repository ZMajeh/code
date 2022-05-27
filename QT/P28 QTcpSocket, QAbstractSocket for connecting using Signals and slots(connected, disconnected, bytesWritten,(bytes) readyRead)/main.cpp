#include <QtCore/QCoreApplication>
#include "driver.h"

// QTcpSocket, QAbstractSocket for connecting using Signals and slots(connected, disconnected, bytesWritten,(bytes) readyRead)
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    driver().drive();
    return a.exec();
}
