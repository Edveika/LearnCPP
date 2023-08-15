#include <iostream>

void Print(int x, int y=1337)
{
	std::cout << x << ' ' << y << std::endl;
}

int main()
{
	Print(1232,25);
	Print(7331); // will print 1337 as y	

	return 0;
}
