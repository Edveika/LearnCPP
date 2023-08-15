#include <iostream>

class Number
{
private:
    int m_digit;

public:
    Number() : m_digit { 0 } {}
    Number(int value) : m_digit { value } {}

    int get_digit() { return m_digit; }

    // ++Prefix inc/dec because it has no int parameter
    Number& operator++() {  ++m_digit; return *this; }
    Number& operator--() { --m_digit; return *this; }

    // Postfix++ inc/dec because it has int parameter
    // Returns increments the number but returns the original one. KEWL
    Number operator++(int) { Number tmp = *this; ++(*this); return tmp; }
    Number operator--(int) { Number tmp = *this; --(*this); return tmp; }
};

int main()
{
    Number num(1337);

    std::cout << (num++).get_digit() << std::endl;
    std::cout << num.get_digit() << std::endl;

    return 0;
}