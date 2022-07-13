#include <iostream>

int main()
{
    int x;
    std::cout << "Enter your running year : ";
    std::cin >> x;
    if(x>18)
        std::cout << "You are adult!";
    else if(x==18)
        std::cout << "You are almost adult";
    else
        std::cout << "You are child!";
    switch(x)
    {
        case 18:
            std::cout << "\nNext year you will become adult" << std::endl;
        break;
        default:
            std::cout << "\nThats all" << std::endl;
    }   
}