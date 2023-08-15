#include <iostream>

void foo(int &x)
{
    std::cout << "lvalue: " << x << std::endl;
}

void foo(int &&x)
{
    std::cout << "rvalue: " << x << std::endl;
}

int main()
{
    int &&r_value_ref = 0;

    {
        int x = 1337;
        r_value_ref = x; // assigns 1337 to the referance, original lvalue x doenst live beyond scope
    }



    foo(r_value_ref); // lvalue because it has an indentifer
    foo(1337); // rvalue, because it doesnt have memory nor identifer
}