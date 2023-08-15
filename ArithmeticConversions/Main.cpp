#include <iostream>
#include <typeinfo> // for typeid()

int main()
{
	int i = 56;
	float f = 360.975f;

	std::cout << typeid(i+f).name() << ' ' << i+f << std::endl;

	short x = 56;
	short y = 21;
	
	// Will be an int because int is higher in the priority list
	std::cout << typeid(x+y).name() << ' ' << x+y << std::endl;


	unsigned int uI = 65;
	int sI = 80;

	// Will produce an unexpected result because unsigned int is higher in the priority list and 65-80 is out of range.
	std::cout << typeid(uI - sI).name() << ' ' << uI- sI << std::endl;

	return 0;
}
