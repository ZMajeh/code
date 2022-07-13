#include <iostream>
#include <cstdlib>
#include <time.h>
int getRandom()
{
    return rand();
}

int main()
{
    srand(time(0));
    std::cout << "Random number is : " << getRandom();
    return 0;
}