#include <iostream>
#include <random> // for mersenne twister
#include <chrono> // for random seed

int main()
{
	// seed the random number state with time passed from some point so numbers are random
	std::mt19937 mt = static_cast<std::mt19937>(std::chrono::steady_clock::now().time_since_epoch().count());
	
	// Will generate a random number from 1 to 6
	std::uniform_int_distribution die6{1,6};

	for (int i = 0; i < 60; ++i)
	{
		std::cout << die6(mt) << "\t";
		
		if (i % 10 == 0)
			std::cout << std::endl;
	}

	// Generates and prints a random number
	std::cout << mt() << std::endl;

	return 0;
}
