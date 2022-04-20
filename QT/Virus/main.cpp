#include <QtGui/QApplication>
#include "mygame.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myGame w;
    w.show();

    return a.exec();
}
