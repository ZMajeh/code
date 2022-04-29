#include <QtGui/QApplication>
#include "myqmessagebox.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myQMessageBox w;
    w.show();

    return a.exec();
}
