#include <iostream>
#include <initializer_list>

class IntArray
{
private:
    int* m_data;
    int m_size;

public:
    IntArray(int size) : m_size { size }
    {
        m_data = new int(size);
    }
    IntArray(std::initializer_list<int> list) : m_size { list.size() } 
    {
        m_data = new int(m_size);

        int count = 0;
        for (auto num : list)
        {
            m_data[count] = num;
            ++count;
        }
    }

    void print_array()
    {
        for (int i = 0; i < m_size; ++i)
        {
            std::cout << m_data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    //IntArray arr({ 1,2,3,4,5});
    IntArray arr { 1 }; // oops, doesnt allocate size 1 array, it calls the list init constructor

    arr.print_array();

    return 0;
}