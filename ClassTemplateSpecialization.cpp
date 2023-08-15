#include <iostream>

template<typename T>
class CustomType
{
private:
    T m_value;

public:
    CustomType() = default;

    void print() { std::cout << "i am whatever i am" << std::endl; }
};

template<>
class CustomType<std::string> // treated like an independant class
{
private:
    std::string m_value;

public:
    CustomType() : m_value { "I am a string" } {}

    void print() { std::cout << "i am a string class" << std::endl; }
    void print_value() { std::cout << m_value << std::endl; }
};

int main()
{
    CustomType<int> i;
    CustomType<std::string> str;

    i.print();
    str.print();
    str.print_value();

    return 0;
}