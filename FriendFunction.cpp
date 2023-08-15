#include <iostream>

class Calc
{
private:
    int result = 0;

public:
    Calc() = default;

    friend void friend_function(Calc &calc);
};

void friend_function(Calc &calc)
{
    calc.result = 1337; // changes private variable
    std::cout << calc.result << std::endl;
}

int main()
{
    Calc calc;

    friend_function(calc);

    return 0;
}