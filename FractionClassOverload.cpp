#include <iostream>
#include <numeric> // for std::gcd

class Fraction
{ 
private:
    int m_numerator;
    int m_denumerator;

public:
    Fraction() = default;
    Fraction(int numerator, int denumerator) : m_numerator { numerator }, m_denumerator {denumerator} { reduce(); }

    void print() { std::cout << m_numerator << "/" << m_denumerator << std::endl; }
	void reduce()
	{
		int gcd = std::gcd(m_numerator, m_denumerator);
		if (gcd)
		{
			m_numerator /= gcd;
			m_denumerator /= gcd;
		}
	}

    friend Fraction operator*(const Fraction &fraction1, const Fraction &fraction2){ return Fraction(fraction1.m_numerator * fraction2.m_numerator, fraction1.m_denumerator * fraction2.m_denumerator); }
    friend Fraction operator*(const Fraction &fraction, int x){ return Fraction(fraction.m_numerator * x, fraction.m_denumerator); }
    friend Fraction operator*(int x, const Fraction &fraction){ return Fraction(fraction.m_numerator * x, fraction.m_denumerator); }

    friend std::ostream& operator<<(std::ostream &output, const Fraction &fraction);
    friend std::istream& operator>>(std::istream &input, Fraction &fraction);
};

std::ostream& operator<<(std::ostream &output, const Fraction &fraction)
{
    output << fraction.m_numerator << "/" << fraction.m_denumerator;

    return output;
}

std::istream& operator>>(std::istream &input, Fraction &fraction)
{
    input >> fraction.m_numerator >> fraction.m_denumerator;

    return input;
}

int main()
{
    Fraction f1;
	std::cout << "Enter fraction 1: ";
	std::cin >> f1;

	Fraction f2;
	std::cout << "Enter fraction 2: ";
	std::cin >> f2;

	std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n'; // note: The result of f1 * f2 is an r-value

    return 0;
}