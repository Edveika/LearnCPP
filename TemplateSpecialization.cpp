#include <iostream>

template<typename T>
class CustomType
{
private:
    T m_value;

public:
    CustomType() = default;

    void print() { std::cout << "???" << std::endl; }
};

template<> // tells the compiler that this is a template but has no params(will get omited)
void CustomType<std::string>::print()
{
    std::cout << "string" << std::endl;
}

int main()
{
    CustomType<int> i;
    CustomType<std::string> str;

    i.print();
    str.print();

    return 0;
}