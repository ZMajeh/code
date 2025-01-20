#include <QtGui/QApplication>
#include "multiplepages.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    multiplePages w;
    w.show();

    return a.exec();
}
