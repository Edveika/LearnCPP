#include <iostream>
#include <cassert>

int main()
{
	int x = 7331;

	assert(x == 1337 && "That number was not so 1337"); // Will warn us that x is not leep
	std::cout << "very l33p number: " << x << std::endl;

	return 0;
}
