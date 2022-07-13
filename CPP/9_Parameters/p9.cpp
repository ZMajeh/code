#include <iostream>

void byValue(int x)
{
    x=20;
}
void byRef(int &x)
{
    x=30;
}
void byPointer(int *x)
{
    *x=40;
}
void defParameter(int &x,int y=10)
{
    x=x+y;
}
int main()
{
    int x=100;
    
    std::cout << "X Initially : " << x << std::endl;
    byValue(x);
    std::cout << "X after byValue : " << x << std::endl;
    byRef(x);
    std::cout << "X after byRef : " << x << std::endl;
    byPointer(&x);
    std::cout << "X after byPointer : " << x << std::endl;
    defParameter(x);
    std::cout << "X after defParameter : " << x << std::endl;
}