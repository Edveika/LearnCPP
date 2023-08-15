#include <iostream>

// inline namespace will be picked by default, PrintKewlStuff() in global namespace will be ignored.
namespace
	void PrintKewlStuff(const char* message)
        {
                std::cout << "[nameless space] " << message << std::endl;
        }
}

namespace version1
{
	void PrintKewlStuff(const char* message)
	{
		std::cout << "[v1] " << message << std::endl;
	}
}

inline namespace version2
{
	void PrintKewlStuff(const char* message)
	{
		std::cout << "[v2] " << message << std::endl;
	}
}

int main()
{
	// Calls the inline version of this function(ver2)
	PrintKewlStuff("Hello");
	
	// Calls a function from specific namespace
	version1::PrintKewlStuff("World!");

	return 0;
}
