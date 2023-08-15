#include <iostream>
#include <utility>

#define MAX_INT 0x7FFFFFFF // max size of 4 BYTE unsigned var in hex

int main()
{
    int arr[] {12, 5, 43, 6, 9, 1337};
    const int arrSize = sizeof(arr)/sizeof(arr[0]);

    // Compares array elements i and i + 1 and replaces i with i +1 if i is bigger(sorts from small to big)
    for (int i = 0; i < arrSize; ++i)
    {
        for (int j = i + 1; j < arrSize; ++j)
        {
            if (arr[i] > arr[j])
            {
                std::swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < arrSize; ++i)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}