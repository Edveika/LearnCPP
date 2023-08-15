#include <iostream>

class Stack
{
private:
    static constexpr int MAX_ARRAY_SIZE = 10;

    int m_array[MAX_ARRAY_SIZE];
    int m_cur_stack_size = 0;

public:
    Stack() {}
    ~Stack() {}

public:
    void push(int x) 
    {
        if (m_cur_stack_size + 1 <= MAX_ARRAY_SIZE)
        {
            m_array[m_cur_stack_size] = x;
            ++m_cur_stack_size;
        }
    }
    void pop() 
    {
        if (m_cur_stack_size - 1 >= 0)
        {
            --m_cur_stack_size;
        }
    }
    void reset() { m_cur_stack_size = 0; }
    void print_top() { std::cout << m_array[m_cur_stack_size] << std::endl; }
    void print_all()
    {
        for (int i = 0; i < m_cur_stack_size; ++i)
        {
            std::cout << m_array[i] << "; ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    Stack stack;

    stack.push(100);
    stack.push(1337);
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.print_all();

    stack.pop();
    stack.pop();
    stack.pop();

    stack.print_all();

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    stack.print_all();

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.print_all();

    return 0;
}