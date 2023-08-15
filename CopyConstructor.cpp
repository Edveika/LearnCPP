#include <iostream>

class MyClass
{
private:
    int x, y, z;
    std::string some_str;

public:
    MyClass() = default; // defaut constructor
    MyClass(const MyClass &my_class) // copy constructor
    {
        std::cout << "Copy constructor called!" << std::endl;

        x = my_class.x;
        y = my_class.y;
        z = my_class.z;
        std::string some_str = my_class.some_str;
    }
};

int main()
{
    MyClass my_class;
    MyClass not_my_class = my_class;


    return 0;
}