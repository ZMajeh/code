#include <QtGui/QApplication>
#include "radiobutton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    radioButton w;
    w.show();

    return a.exec();
}
