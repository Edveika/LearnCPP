#include <iostream>
#include <deque>

int main()
{
    std::deque<int> deque_container;

    for (int i = 0; i < 13; ++i)
    {
        deque_container.push_back(i);
        deque_container.push_front(-(i));
    }

    for (int i = 0; i < deque_container.size(); ++i)
    {
        std::cout << deque_container[i] << " ";
    }

    return 0;
}