#include <iostream>
int main()
{
    int x=0;

    while(x++<5)
        std::cout << "While loop : " << x << std::endl;

    do
    {
        std::cout << "Do while loop : " << x << std::endl;
    } while (x++<5);

    for(;x>0;x--)
        std::cout << "For loop : " << x << std::endl;
}