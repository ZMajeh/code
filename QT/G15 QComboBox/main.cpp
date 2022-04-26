#include <QtGui/QApplication>
#include "combobox.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    comboBox w;
    w.show();

    return a.exec();
}
