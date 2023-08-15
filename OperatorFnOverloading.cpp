#include <iostream>

class Money
{
private:
    int m_money_count;

public:
    Money(int money_value) : m_money_count { money_value } {}

    int get_money() { return m_money_count; }
};

Money operator+(Money &money1, Money &money2)
{
    return Money(money1.get_money() + money2.get_money());
}

int main()
{
    Money money1(3);
    Money money2(1337);

    Money sum = money1 + money2;

    std::cout << sum.get_money() << std::endl;

    return 0;
}