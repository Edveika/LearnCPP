#include <iostream>

class Calc
{
private:
    double m_value  = 0;

public:
    Calc(double x) : m_value { x } {}

    double get_value() { return m_value; }

    friend Calc operator+(const Calc &calc1, const Calc &calc2) { return calc1.m_value + calc2.m_value; }
    friend Calc operator-(const Calc &calc1, const Calc &calc2) { return calc1.m_value - calc2.m_value; }
    friend Calc operator*(const Calc &calc1, const Calc &calc2);
    friend Calc operator/(const Calc &calc1, const Calc &calc2);

    friend Calc operator+(const Calc &calc, int x) { return calc.m_value + x; }
};

Calc operator*(const Calc &calc1, const Calc &calc2)
{
    return calc1.m_value * calc2.m_value;
}

Calc operator/(const Calc &calc1, const Calc &calc2)
{
    return calc1.m_value / calc2.m_value;
}

int main()
{
    Calc calc1(1337);
    Calc calc2(3);

    Calc sum = calc1 + calc2;
    Calc sub = calc1 - calc2;
    Calc mlt = calc1 * calc2;
    Calc dvd = calc1 / calc2;

    std::cout << sum.get_value() << std::endl;
    std::cout << sub.get_value() << std::endl;
    std::cout << mlt.get_value() << std::endl;
    std::cout << dvd.get_value() << std::endl;

    return 0;
}