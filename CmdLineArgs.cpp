#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    std::cout << "Name of the program: " << argv[0] << std::endl; // name of the program
    std::cout << "Argument count: " << argc << std::endl; // prints out count of arguments

    std::cout << "You passed in these arguments: "; // prints all the arguments

    for (int i = 1; i < argc; ++i)
    {
        std::cout << "[" << i << "] " << argv[i] << "; ";
    }

    std::cout << std::endl;

    return 0;
}