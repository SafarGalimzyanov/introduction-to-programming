#include <iostream>
//#include <string>

int main() {

	char c;
	std::cin >> c;
	if (c >= '0' && c <= '9')
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}


	return 0;
}