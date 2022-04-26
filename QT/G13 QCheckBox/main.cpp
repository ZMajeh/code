#include <QtGui/QApplication>
#include "checkbox.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    checkBox w;
    w.show();

    return a.exec();
}
