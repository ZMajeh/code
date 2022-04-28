#include <QtGui/QApplication>
#include "myqsliderandqprogressbar.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myQSliderAndQProgressBar w;
    w.show();

    return a.exec();
}
