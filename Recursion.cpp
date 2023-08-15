#include <iostream>

void foo(int x);
int RecursiveFibonacciAlg(int count);

int main()
{
    std::cout << RecursiveFibonacciAlg(10) << std::endl;

    //foo(1337); // will cause stack overflow

    return 0;
}

void foo(int x)
{
    std::cout << "value X: " << x << std::endl;

    foo(x + 1);
}

int RecursiveFibonacciAlg(int count)
{
    if (count == 0)
        return 0;
    else if (count == 1)
        return 1;
    else if (count > 1)
    {
        return RecursiveFibonacciAlg(count - 1) + RecursiveFibonacciAlg(count - 2);
    }
}