#include <QtCore/QCoreApplication>
#include "downloader.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    downloader obj;
    obj.download("www.google.com","/india");
    return a.exec();
}
