#include <iostream>
#include <iterator>

void foo(int* arrayPtr, int** &arrPtrAddress);

int main()
{
    int array[] {12, 15, 23, 57};
    int** addressOfArrPtr = NULL;

    foo(array, addressOfArrPtr);

    std::cout << "PTR to the first element of the array: " << *array << std::endl;
    std::cout << "Adress of a pointer that points to the array: " << addressOfArrPtr << std::endl;
    std::cout << "PTR to the first element of the array: " << *array << std::endl;
    std::cout << "PTR to the second element of the array: " << (array+1) << std::endl; // !!!

    // array ptr loop
    for (int *ptr = array; ptr < (array + std::size(array)); ++ptr) // ++ptr adds the size of the variable in the array to the ptr to the var(n*0x4)
    {
        std::cout << *ptr << std::endl;
    }

    return 0;
}

void foo(int* arrayPtr, int** &arrPtrAddress)
{
    arrPtrAddress = &arrayPtr;
    std::cout << "First element of array from the pointer that points to the address of the array: " << *(*arrPtrAddress) << std::endl;

}