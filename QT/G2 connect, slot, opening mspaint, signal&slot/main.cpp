#include <QtGui/QApplication>
#include "g2.h"

int main(int argc, char *argv[])
{
    std::cout<<"Hello world from main b4 app";
    QApplication a(argc, argv);
    G2 w;
    w.show();
    std::cout<<"Hello world from main";
    return a.exec();
}
