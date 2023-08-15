#include <iostream>

void ModifyPointger(int*& refptr)
{
    ptr = nullptr; // will set the ptr to nullptr(not the copy)
}

int main()
{
    int x = 5;
    int *ptr = &x;

    ModifyPointger(ptr);
    std::cout << *ptr << std::endl;

    return 0;
}