#include <iostream>

int main()
{
	int x = 0;
	{
		int x = 3;
		std::cout << x << std::endl; // 3 will be printed
	}

	return 0;
}
