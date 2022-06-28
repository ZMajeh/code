#include <QtCore/QCoreApplication>

#include "d1.h"

// Using DLL
// Make DLL
// ADD LIBS in .pro file
// Add .h files used in dll
// Copy .h files in same directory
// Lastly add DLL file to debuge and release directory as per needed
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Can use class in DLL file directly, by providing .h files only.
    D1 obj;
    obj.doit();

    return a.exec();
}
