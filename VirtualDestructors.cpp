#include <iostream>
#include <string_view>

class Parent
{
public:
    //
    // will only delete the parent because the destructor is not virtual
    //
    // ~Parent() 
    // {
    //     std::cout << "Parent::~Parent()" << std::endl;
    // }
    virtual ~Parent() 
    {
        std::cout << "virtual Parent::~Parent()" << std::endl;
    }

    virtual std::string_view identify() const { return "I am a parent"; }
};

class Child: public Parent
{
public:
    // ~Child()
    // {
    //     std::cout << "Child::~Child()" << std::endl;
    // }
    virtual ~Child()
    {
        std::cout << "virtual Child::~Child()" << std::endl;
    }

    virtual std::string_view identify() const { return "I am a child"; }
};

class ChildOfAChild : public Child
{
public:
    // ~ChildOfAChild()
    // {
    //     std::cout << "ChildOfAChild::~ChildOfAChild()" << std::endl;
    // }
    virtual ~ChildOfAChild()
    {
        std::cout << "virtual ChildOfAChild::~ChildOfAChild()" << std::endl;
    }

    virtual std::string_view identify() const { return "I am a child of a child"; }
};

void identify_object(Parent *parent)
{
    std::cout << parent->identify() << std::endl;
}

int main()
{
    Parent* parent = new Parent;
    Child* child = new Child;
    ChildOfAChild* child_of_child = new ChildOfAChild;

    identify_object(parent);
    std::cout << child->Parent::identify() << std::endl; // valid
    identify_object(child);
    identify_object(child_of_child);

    delete child_of_child;
}