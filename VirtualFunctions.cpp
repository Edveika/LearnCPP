#include <iostream>
#include <string_view>

class Parent
{
public:
    virtual std::string_view identify() const { return "I am a parent"; } // note addition of virtual keyword
};

class Child: public Parent
{
public:
    virtual std::string_view identify() const { return "I am a child"; }
};

class ChildOfAChild : public Child
{
public:
    virtual std::string_view identify() const { return "I am a child of a child"; }
};

int main()
{
    Child child;
    Parent& r_parent = child;

    std::cout << r_parent.identify() << std::endl; // Will print i am a child, the compiler looks for the most derived identify fn until Child obj
};