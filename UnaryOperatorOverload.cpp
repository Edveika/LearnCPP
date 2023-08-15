// unary: +(positive), -(negative), !(not)
#include <iostream>

class Money
{
private:
    int m_money;

public:
    Money(int value) : m_money { value } {}

    int get_money() { return m_money; }

    Money operator-() const { return Money(-m_money); }
    bool operator!() const { return m_money == 0; }
};

int main()
{
    Money money(1337);

    std::cout << (-money).get_money() << std::endl;
    std::cout << (!money) << std::endl;

    return 0;
}