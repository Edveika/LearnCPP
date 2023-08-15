#include <iostream>

int main()
{
	int bigNumber;

	// No notation. Long, hard to read
	bigNumber = 120000;
	std::cout << "No notation: " << bigNumber << std::endl;

	// With notation. Short, simple and easy to read.
	bigNumber = 1.2e5;
	std::cout << "With notation: " << (int)bigNumber << std::endl;

	return 0;
}
