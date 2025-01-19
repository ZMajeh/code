#include <iostream>

int main()
{
    int x=0;

    while(x!=-1)
    {
        std::cin >> x;
        std::cout << "You entered : " << x << std::endl;
        // This is used to avoid exceptions on wrong inputs
        std::cin.clear();
        std::cin.ignore();
    }
}