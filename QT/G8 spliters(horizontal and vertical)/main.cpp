#include <QtGui/QApplication>
#include "spliters.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    spliters w;
    w.show();

    return a.exec();
}
