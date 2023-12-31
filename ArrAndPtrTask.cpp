#include <iostream>
#include <iterator>

int* findValue(int* begin, int* end, int value);

int main()
{
    int arr[]{ 2, 5, 4, 10, 8, 20, 16, 40 };

    // Search for the first element with value 20.
    int* found{ findValue(std::begin(arr), std::end(arr), 40) };

    // If an element with value 20 was found, print it.
    if (found != nullptr)
    {
        std::cout << *found << '\n';
    }
    else
    {
        std::cout << "Not found!" << std::endl;
    }

    return 0;
}

int* findValue(int* begin, int* end, int value)
{
    for (int* ptr = begin; ptr < end; ++ptr)
    {
        if (*ptr == value)
            return ptr;
    }

    return nullptr;
}