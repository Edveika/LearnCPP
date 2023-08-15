#include <iostream>

class Add
{
private:
    int m_result = 0;

public:
    Add() = default;

    Add& add(int x)
    {
        m_result += x;

        return *this;
    }
    int get_result() { return m_result; }
};

int main()
{
    Add add_obj;

    add_obj.add(5).add(15);

    std::cout << add_obj.get_result() << std::endl;

    return 0;
}