#include <iostream>
#include <cstdarg>

int find_sum(int number_count, ...);

int main()
{
    std::cout <<find_sum(4, 10, 7, 20, 3) << std::endl;

    return 0;
}

int find_sum(int number_count, ...)
{
    int sum = 0;
    std::va_list list;

    va_start(list, number_count);

    for (int i = 0; i < number_count; ++i)
    {
        sum += va_arg(list, int);
    }

    va_end(list);

    return static_cast<int>(sum);
}