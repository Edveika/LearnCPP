#include <iostream>
#include <bitset>

int main()
{
	std::bitset<8> bits {0x0000'0000};
	
	bits.set(0);
	bits.set(2);

	std::cout << bits << std::endl;
	std::cout << "bit 0 is: " << bits.test(0) << std::endl;
	std::cout << "bit 2 is: " << bits.test(2) << std::endl;
	
	return 0;
}
