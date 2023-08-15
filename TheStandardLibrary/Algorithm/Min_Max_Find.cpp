#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    //
    // Find min/max
    //
    std::vector<int> arr { 1337, 5, 9,0 , 1, 2, 3 };

    std::cout << *std::min_element(arr.begin(), arr.end()) << std::endl;
    std::cout << *std::max_element(arr.begin(), arr.end()) << std::endl;

    //
    // Find x/insert
    //
    std::vector<int>::iterator i_arr = std::find(arr.begin(), arr.end(), 1337);

    arr.insert(i_arr, 7331);

    for(int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}