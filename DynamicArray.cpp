#include <iostream>

int main()
{
    int len = 100000000;

    int *arr = new int[len];

    std::cout << static_cast<double>((sizeof(*arr)*len)/1024.f/1024.f) << std::endl;

    while(1);

    return 0;
}