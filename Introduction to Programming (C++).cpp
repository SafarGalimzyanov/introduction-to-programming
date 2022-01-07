#include <iostream>
//#include <string>

int main() {

	char c;
	std::cin >> c;
	if (c == char(toupper(c)))
	{
		std::cout << char(tolower(c));
	}
	else
	{
		std::cout << char(toupper(c));
	}

	return 0;
}