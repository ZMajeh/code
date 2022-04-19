#include <QtGui/QApplication>
#include "g3.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    G3 w;
    w.show();

    return a.exec();
}
