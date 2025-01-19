#include <QtGui/QApplication>
#include "menudemo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    menuDemo w;
    w.show();

    return a.exec();
}
