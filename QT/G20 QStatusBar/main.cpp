#include <QtGui/QApplication>
#include "myqstatusbar.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myQStatusBar w;
    w.show();

    return a.exec();
}
