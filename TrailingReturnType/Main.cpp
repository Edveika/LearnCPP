#include <iostream>

auto Dec(int a, int b) ->int;

auto Add(int a, int b) ->int;

int main()
{
	std::cout << Add(15,9) << std::endl;	
	std::cout << Dec(99,9) << std::endl;

	return 0;
}

auto Dec(int a, int b) ->int
{
	return a-b;
}

auto Add(int a, int b) ->int
{
	return a+b;
}