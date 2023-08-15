#include <iostream>
#include <bitset>
int main()
{
	//
	// Ways to define bitmasks:
	// 
	// constexpr std::uint8_t mask = 0b0000'1001;	// binary
	// conestexpr std::uint8_t mask = 0x1;		// hex
	// conestexor std::uint8_t mask = (1 << 0)	// shift operator
	
	std::uint8_t bits = 0b0010'0001;
	constexpr std::uint8_t mask0 = (1 << 0);
	constexpr std::uint8_t mask1 = (1 << 1);
	constexpr std::uint8_t mask2 = (1 << 2);
	constexpr std::uint8_t mask3 = (1 << 3);
	constexpr std::uint8_t mask4 = (1 << 4);
	constexpr std::uint8_t mask5 = (1 << 5);
	constexpr std::uint8_t mask6 = (1 << 6);
	constexpr std::uint8_t mask7 = (1 << 7);

	std::cout << "[SET BITS]" << std::endl;
	std::cout << "Mask0: " << ((bits & mask0) ? "1\n":"0\n");
	std::cout << "-------------" << std::endl;

	std::cout << "Mask7: " << ((bits & mask7) ? "1\n":"0\n");
	bits |= mask7;
	std::cout << "Mask7: " << ((bits & mask7) ? "1\n":"0\n");
	std::cout << "-------------" << std::endl;
	
	std::cout << "[RESET BITS]" << std::endl;
	std::cout << "Mask7: " << ((bits & mask7) ? "1\n":"0\n");
        bits &= ~mask7;
        std::cout << "Mask7: " << ((bits & mask7) ? "1\n":"0\n");
        std::cout << "-------------" << std::endl;

	std::cout << "[XOR/FLIP BITS]" << std::endl;
        std::cout << "Mask7: " << ((bits & mask7) ? "1\n":"0\n");
        bits ^= mask7;
        std::cout << "Mask7: " << ((bits & mask7) ? "1\n":"0\n");
        std::cout << "-------------" << std::endl;
	
	return 0;
}
