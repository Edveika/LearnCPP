#include <iostream>

class Cents
{
private:
    int m_cents;

public:
    Cents(int value = 0) : m_cents { value } {}

    int get_cents() { return m_cents; }
    void set_cents(int value) { m_cents = value; }

    operator int() const { return m_cents; }
};
void foo(double goo)
{
    std::cout << goo / 3.f << std::endl;
}


int main()
{
    Cents cents(1337);

    foo(static_cast<double>(cents));

    return 0;
}