#include <iostream>
#include <cstdarg>
#include <functional>

int main()
{
    std::function<int(int, int)>* by_the_power_of = new std::function<int(int, int)>(
    [&by_the_power_of](int number, int power) -> int 
    {
        if (power == 0)
            return 1;
        else if (power == 1)
            return number;
        else if (power < 0)
        {
            return NULL; // 1 / (number^power)
        }
        else if (power > 1)
        {
            return (*by_the_power_of)(number*number, power-1);
        }

        return number;
    });

    int pow = (*by_the_power_of)(5, 2);

    std::cout << pow << std::endl;

    return 0;
}