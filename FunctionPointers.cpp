#include <iostream>

bool ascending(int x, int y);
bool descending(int x, int y);
void sort_array(int *array_ptr, int array_size, bool (*comparison_function)(int, int));

int main()
{
    int array[] { 1337, 5, 66, 99, 5, 1, 12439, 5438, 34833, 3, 6, 9 };
    int array_size = std::size(array);

    sort_array(array, 12, &descending);

    for (int i = 0; i < 12; ++i)
    {
        std::cout << array[i] << std::endl;
    }

    return 0;
}

bool ascending(int x, int y)
{
    return x > y;
}

bool descending(int x, int y)
{
    return x < y;
}

void sort_array(int *array_ptr, int array_size, bool (*comparison_function)(int, int))
{
    for (int i = 0; i < array_size; ++i)
    {
        for (int j = i + 1; j < array_size; ++j)
        {
            if (comparison_function(array_ptr[i], array_ptr[j]))
            {
                std::swap(array_ptr[i], array_ptr[j]);
            }
        }
    }
}