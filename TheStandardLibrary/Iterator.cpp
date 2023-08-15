#include <iostream>
#include <vector>

int main()
{
    std::vector<int> arr;
    for (int i = 0; i < 37; ++i)
    {
        arr.push_back(i);
    }

    std::vector<int>::iterator i_arr;
    i_arr = arr.begin();
    while (i_arr != arr.end())
    {
        std::cout << "Curr: " << *i_arr << std::endl; // prints current element 
        std::cout << "Next: " << *(i_arr + 1) << std::endl; // next element
    
        ++i_arr;
    }

    return 0;
}