#include <iostream>
#include <memory>

class Foo
{
public:
    Foo() { std::cout << "Constructor" << std::endl; }
    ~Foo() { std::cout << "Destructor" << std::endl; }
};

int main()
{
    std::unique_ptr<Foo> goo { new Foo }; // creates a ptr on the stack to Foo that is on the heap

    return 0; // no mem leak, deletes it automatically
}