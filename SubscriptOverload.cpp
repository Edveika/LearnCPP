#include <iostream>

class List
{
private:
    int m_array[5];

public:
    List() {}

    int& operator[](int index) { return m_array[index]; } // can check for a valid index
    int operator[](int index) const { return m_array[index]; } // can return & if returning non-fundamental data type
};

int main()
{   
    List list;

    // Passes the value from the braces to the argument index
    list[0] = 1; // same as list.m_array[0] = 1
    list[1] = 3;
    list[2] = 3;
    list[3] = 7;

    // const List list1;
    // list1[0] = 1; // cant. it returns rvalue, must be lvalue.

    return 0;
}