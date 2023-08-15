#include <iostream>
#include <algorithm>
#include <vector>

bool greater(int x, int y) { return x > y; }

int main()
{
    std::vector<int> arr { 7331, 1, 2, 3, 0, 404, 101 };

    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    // or just pass greater to std::sort param as fn ptr
    std::reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}