#include <QtGui/QApplication>
#include "mytreewidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myTreeWidget w;
    w.show();

    return a.exec();
}
