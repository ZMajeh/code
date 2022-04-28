#include <QtGui/QApplication>
#include "myqactions.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myQactions w;
    w.show();

    return a.exec();
}
