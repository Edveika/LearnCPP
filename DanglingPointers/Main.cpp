#include <iostream>

int main()
{
    int x = 1991;
    int* ptr = &x;

    std::cout << *(ptr) << std::endl;

    {
        int y = 1337;
        ptr = &y;

        std::cout << *(ptr) << std::endl;
    }

    std::cout << *(ptr) << std::endl;

    return 0;
}