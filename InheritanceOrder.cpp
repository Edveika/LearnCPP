#include <iostream>

class A
{
private:
    int x = 1337; // cant be accessed by derived classes
public:
    int y = 0; // anyone can access
protected:
    int z = 7331;
public:
    A() { std::cout << "[A]" << std::endl; }
};

class B : public A
{
public:
    B() 
    { 
        std::cout << "[B]" << std::endl;
        z = 1337; // allowed, but it cant be accessed outside of the class
    }
};

class C : public B
{
public:
    C() 
    { 
        std::cout << "[C]" << std::endl; 
        z = 1; // allowed, but it cant be accessed outside of the class
    }
};

class D : public C
{
public:
    D() { std::cout << "[D]" << std::endl; }
};

class E : public D
{
public:
    E() { std::cout << "[E]" << std::endl; }
};

int main()
{
    std::cout << "Making A: " << std::endl;
    A a;

    std::cout << "Making B: " << std::endl;
    B b;

    std::cout << "Making C: " << std::endl;
    C c;

    std::cout << "Making D: " << std::endl;
    D d;

    std::cout << "----------" << std::endl;

    std::cout << "A at: " << &a << std::endl;
    std::cout << "B at: " << &b << std::endl;
    std::cout << "C at: " << &c << std::endl;
    std::cout << "D at: " << &d << std::endl;

    return 0;
}