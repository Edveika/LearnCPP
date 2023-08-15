#include <iostream>

class Base
{
public:
    virtual int get_number() = 0;
    virtual std::string get_string() = 0;
};

std::string Base::get_string()
{
    return "???";
}

class Derived : public Base
{
private:
    int m_number;

public:
    Derived(int number) : m_number { number } {}

    virtual int get_number() { return m_number; }
    //virtual std::string get_string() { return "Kewl string"; } // custom pure virtual function
    virtual std::string get_string() { return Base::get_string(); } // will return the default Base class str
};

int main()
{
    // Base class cant be instantiated because it has a pure virtual function
    Derived derived(1337);

    std::cout << derived.get_number() << std::endl;
    std::cout << derived.get_string() << std::endl;
    
    return 0;
}