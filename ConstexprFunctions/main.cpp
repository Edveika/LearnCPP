#include <iostream>
#include <type_traits>

constexpr int ConstGreaterValue(int a, int b)
{
        if (std::is_constant_evaluated())
                return 1337;

        return (a > b) ? a : b;
}

consteval int GreaterValue(int a, int b)
{
	if (std::is_constant_evaluated())
		return 1337;
		
	return (a > b) ? a : b;
}

int main()
{
	constexpr int constValueA = 5;
	constexpr int constValueB = 7;

	// Will be evaluated during compile time
	std::cout << GreaterValue(constValueA, constValueB) << std::endl;
	
	//
	// ONLY const values can be passed as arguments
	//

	//int valueA = 5;
	//int valueB = 7;

	// Will be evaluated during runtime, because the values a and b are not const
	//std::cout << GreaterValue(valueA, valueB) << std::endl;

	// Can be evaluated during runtime or compiler time
	//std::cout << GreaterValue(5,7) << std::endl;

	return 0;
}
