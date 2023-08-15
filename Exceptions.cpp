#include <iostream>

float divide(float x, float y);

int main()
{   try
    {
        std::cout << divide(1.0f, 2.0f) << std::endl;
        std::cout << divide(3.0f, 4.0f) << std::endl;
        std::cout << divide(5.0f, 0.0f) << std::endl; // oops, will give an exception
    }
    catch(int x) // oops, this will not catch the exception
    {
        std::cerr << "[EXCEPTION]: " << x << std::endl;
    }
    catch(...) //but this will... catch-all
    {} //but it does nothing...
    
    return 0;
}

float divide(float x, float y)
{
    if (!y)
    {
        throw "DIVISION_BY_ZERO_NOT_ALLOWED";
    }

    return x / y;
}