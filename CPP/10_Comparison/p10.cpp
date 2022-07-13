#include <iostream>

int main()
{
    int x,y;
    std::cout << "Enter x and y : ";
    std::cin >> x >> y;
    if(x==y)
        std::cout << "Both are same" << std::endl;
    if(x!=y)
        std::cout << "Both are not same" << std::endl;
    if(x>y)
        std::cout << "First greater than second" << std::endl;
    if(x<y)
        std::cout << "Second greater than first" << std::endl;
    if(x>=y)
        std::cout << "First greater than or equal to second" << std::endl;
    if(x<=y)
        std::cout << "Second greater than or equal to first" << std::endl;
}