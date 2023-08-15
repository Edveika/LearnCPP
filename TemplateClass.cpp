#include <iostream>

template<typename T>
class Number
{
private:
    T m_number;

public:
    Number(T number) : m_number { number } {}

    T get_number() { return m_number; }
    void set_number(T value) { m_number = value; }

    friend std::ostream& operator<<(std::ostream& output, Number& number) { output << number.get_number(); return output; }
};

int main()
{
    Number i_number(1337);
    Number d_number(7331.0);
    Number f_number(3173);
    Number c_number('a');

    std::cout << i_number << std::endl;
    std::cout << d_number << std::endl;
    std::cout << f_number << std::endl;
    std::cout << c_number << std::endl;

    return 0;
}