#include <iostream>

class Fraction
{ 
private:
    int m_numerator;
    int m_denumerator;

public:
    Fraction() = default;
    Fraction(int numerator, int denumerator) : m_numerator { numerator }, m_denumerator {denumerator} {}

    void print() { std::cout << m_numerator << "/" << m_denumerator << std::endl; }

    friend Fraction operator*(const Fraction &fraction1, const Fraction &fraction2);
    friend Fraction operator*(const Fraction &fraction, int x);
    friend Fraction operator*(int x, const Fraction &fraction);
};

Fraction operator*(const Fraction &fraction1, const Fraction &fraction2)
{
    return Fraction(fraction1.m_numerator * fraction2.m_numerator, fraction1.m_denumerator * fraction2.m_denumerator);
}

Fraction operator*(const Fraction &fraction, int x)
{
    return Fraction(fraction.m_numerator * x, fraction.m_denumerator);
}

Fraction operator*(int x, const Fraction &fraction)
{
    return Fraction(fraction.m_numerator * x, fraction.m_denumerator);
}

int main()
{
    Fraction f1{ 1, 4 };
    f1.print();

    Fraction f2{ 1, 2 };
    f2.print();

    Fraction mlt1 = f1 * f2;
    mlt1.print();

    Fraction mlt2 = f1 * 8;
    mlt2.print();

    Fraction mlt3 = 9 * f2;
    mlt3.print();

    return 0;
}