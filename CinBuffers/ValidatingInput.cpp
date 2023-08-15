#include <iostream>
#include <limits> // numeric limits

void ClearCinBuffer()
{
	// Clears out all the characters from the buffer except for the \n
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
	int x = 0;
	std::cin >> x; // even if 445a is inputed
	ClearCinBuffer(); // all characters from the buffer are removed
	std::string str;
	std::cin >> str; // new input is taken

	return 0;
}
