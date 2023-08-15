#include <iostream>

constexpr std::string names[] { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

int main()
{
    std::string userInput;

    std::cout << "Enter a name you want to check: ";
    std::cin >> userInput;

    for (auto &name : names)
    {
        if (userInput == name)
        {
            std::cout << userInput << " found!" << std::endl;
            return 0;
        }
    }

    std::cout << userInput << " not found..." << std::endl;

    return 0;
}