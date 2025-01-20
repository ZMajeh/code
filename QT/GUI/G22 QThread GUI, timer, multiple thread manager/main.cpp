#include <QtGui/QApplication>
#include "mythreadcounter.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myThreadCounter w;
    w.show();

    return a.exec();
}
