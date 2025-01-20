#include <QtGui/QApplication>
#include "lineedit.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    lineEdit w;
    w.show();

    return a.exec();
}
