#include <QtCore/QCoreApplication>

#include "d3.h"


// To Use static library,
// 1. Make library project
// 2. Add class and all items needed
// 3. Make buid
// 4. Store .h and .a file for using
// 5. Add .h and .a file in same directory of this project
// 6. Include .h file
// 7. Add 'LIBS+="FileName.a"' inside .pro file of this project
// 8. Now you can access .a file's all classes
// 9. This is statically compiled, so no need to distribute .a file


// Difference in .a and .dll

// .a File is useless at end user, it is compiled inside executable,
// Changing .a file will not affect project which is alredy built using .a file

// .dll file is shared to end user, It is used when running .exe file
// Changing .dll file's class code will affect output of project as it is only checked at runtime

// Execute start here
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // Class declaration in .h file and defination in .a file
    D3 obj;
    obj.test();
    return a.exec();
}
