#include <iostream>
#include <string>

int main() {

	std::string s;
	getline(std::cin, s);

	int length = s.size();
	int cnt = 1;

	for (int i = 0; i < length / 2; ++i)
	{
		if (s[i] != s[length - i - 1])
		{
			std::cout << "no";
			return 0;
		}
	}
	std::cout << "yes";

	return 0;
}