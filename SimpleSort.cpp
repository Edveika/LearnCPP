#include <iostream>
#include <utility>

#define MAX_INT 0x7FFFFFFF // max size of 4 BYTE unsigned var in hex

int main()
{
    int arr[] {12, 5, 43, 6, 9, 1337};
    const int arrSize = sizeof(arr)/sizeof(arr[0]);

    // Finds a bigger value in the array and puts it in the front(big to small sort)
    for (int i = 0; i < arrSize; ++i)
    {
        int biggestValueInArrayIndex = i;
        for (int j = i + 1; j < arrSize; ++j)
        {
            if (arr[biggestValueInArrayIndex] < arr[j])
            {
                biggestValueInArrayIndex = j;
            }
        }
        std::swap(arr[i], arr[biggestValueInArrayIndex]);
    }

    for (int i = 0; i < arrSize; ++i)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}