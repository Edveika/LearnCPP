#include <iostream>
#include <iomanip>

int main()
{
	// std::cout nutruncina iki 6 significant skaiciu
	std::cout << 124567890 << std::endl;
	std::cout << 12456.f << std::endl;
	std::cout << 1245.67890f << std::endl;
	std::cout << 12456789.0f << std::endl;
	std::cout << 0.0000124567890f << std::endl;

	std::cout << "--------------------" << std::endl;

	// Nustato, kad cout nukirptu iki 10 skaicu po kablelio
	std::cout << std::setprecision(10) << std::endl;

	float f = 124567890.0f;
    std::cout << 124567890.0 << std::endl; // will work
    std::cout << f << std::endl; // will not work. float has 7 precise numbers, this is 10

	return 0;
}
