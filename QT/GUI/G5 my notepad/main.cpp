#include <QtGui/QApplication>
#include "notepaddemo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    notepadDemo w;
    w.show();

    return a.exec();
}
