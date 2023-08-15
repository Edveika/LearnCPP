#include <iostream>

class Money
{
private:
    int m_money_count;

public:
    Money(int money_value) : m_money_count { money_value } {}

    int get_money() { return m_money_count; }

    Money operator+(int value);
    Money operator+(Money money);
};

Money Money::operator+(int value)
{
    return Money(m_money_count + value);
}

Money Money::operator+(Money money)
{
    return Money(m_money_count + money.get_money());
}

int main()
{
    Money money1(1337);
    Money money2 (1337 + 3);
    Money money3 (money1 + money2);

    std::cout << money3.get_money();

    return 0;
}