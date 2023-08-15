#include <iostream>

const int& GetInt()
{
    static const int i = 1337; // static dur, destroyed at the end of the program

    return i; // returns const i ref
}

int main()
{
    const int& i = GetInt();

    std::cout << i << std::endl;

    return 0;
}