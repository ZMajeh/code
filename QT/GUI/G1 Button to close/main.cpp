#include <QtGui/QApplication>
#include "g1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    G1 w;
    w.show();

    return a.exec();
}
