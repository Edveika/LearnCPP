#include <iostream>
#include <bitset>

int main()
{
	//
	// Bitwise shift left
	//
	std::bitset<4> shiftLeft = 0b0011;
	std::cout << "Shift left: " << shiftLeft << std::endl;
	std::cout << (shiftLeft << 1) << std::endl;
	std::cout << (shiftLeft << 2) << std::endl;
	std::cout << (shiftLeft << 3) << std::endl;
	std::cout << "---------" << std::endl;	

	//
	// Bitwise shift right
	//
	std::bitset<4> shiftRight = 0b1100;
	std::cout << "Shift right: " << shiftRight << std::endl;
	std::cout << (shiftRight >> 1) << std::endl;
	std::cout << (shiftRight >> 2) << std::endl;
	std::cout << (shiftRight >> 3) << std::endl;
	std::cout << "---------" << std::endl;

	//
	// Bitwise not(flips)
	//
	std::bitset<4> bitsetNot = 0b0011;
	std::cout << "Bitset not: " << bitsetNot << std::endl;
	std::cout << ~bitsetNot << std::endl;
	std::cout << "---------" << std::endl;

	//
	// Bitwise or(compares each bit)
	//
	std::bitset<4> orBitsetX = 0b0011;
	std::bitset<4> orBitsetY = 0b0001;
	std::cout << "Or: X: " << orBitsetX << " Y: " << orBitsetY << std::endl;
	std::cout << (orBitsetX | orBitsetY) << std::endl;
	std::cout << "---------" << std::endl;
		
	//
	// Bitwise and(each bit)
	//
	std::bitset<4> andBitsetX = 0b1011;
        std::bitset<4> andBitsetY = 0b1001;
	std::cout << "And: X: " << andBitsetX << " Y: " << andBitsetY << std::endl;
	std::cout << (andBitsetX & andBitsetY) << std::endl;
	std::cout << "---------" << std::endl;

	//
	// XOR
	//
	std::bitset<4> xorBitsetX = 0b0111;
	std::bitset<4> xorBitsetY = 0b0010;
	std::cout << "XOR: X: " << xorBitsetX << " Y: " << xorBitsetY << std::endl;
      	std::cout << (xorBitsetX ^ xorBitsetY) << std::endl;
	std::cout << "---------" << std::endl;	

	return 0;
}
