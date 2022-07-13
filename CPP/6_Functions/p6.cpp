#include <iostream>

void myFunction()
{
    std::cout << "This is from function" << std::endl;
}

int main()
{
    std::cout << "This is from main" << std::endl;
    myFunction();
    return 0;
}