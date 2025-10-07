#include <QtGui/QApplication>
#include "pushbutton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PushButton w;
    w.show();

    return a.exec();
}
