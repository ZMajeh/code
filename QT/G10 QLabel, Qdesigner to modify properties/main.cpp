#include <QtGui/QApplication>
#include "label.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Label w;
    w.show();

    return a.exec();
}
