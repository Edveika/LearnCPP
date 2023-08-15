#include <iostream>

template<typename T>
T add(T x, T y)
{
	return x+y;
}

int main()
{
	std::cout << "Double: " << add(0.66, 0.9786) << std::endl;
	std::cout << "Float: " << add(66.0f, 2346.123453f) << std::endl;

	// All do the same thing
	std::cout << "Int: " << add(6, 6) << std::endl; // easier to read
	std::cout << add<int>(5,5) << std::endl;
	std::cout << add<>(5,5) << std::endl;
	
	return 0;
}
