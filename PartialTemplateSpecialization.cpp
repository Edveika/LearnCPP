#include <iostream>

template<typename T, int some_number>
class CustomType
{
private:
    T m_value;

public:
    CustomType() = default;

    void print() { std::cout << "i am whatever i am" << std::endl; }
};

template<int num>
void print(CustomType<std::string, num> type)
{
    std::cout << "i am a string and i have a number: " << num << std::endl;
}

//
//
//

// duplicate code

// template<int some_number>
// class CustomType<std::string, some_number>
// {
// private:
//     std::string m_value;

// public:
//     CustomType() = default;

//     void print() { std::cout << "i am a string and i have a number: " << some_number << std::endl; }
// };

//
//
//

// Less duplicate code. way 2 go
template<typename T, int some_number>
class Derived : public CustomType<T, some_number> {};

template<int some_number>
class Derived<std::string, some_number> : public CustomType<std::string, some_number>
{
public:
    void print()
    {
        std::cout << "I am a string and i have a number: " << some_number << std::endl;
    }
};

int main()
{
    CustomType<int, 123> i;
    CustomType<std::string, 1> str;

    i.print();
    str.print();
    print(str);

    return 0;
}