#include <iostream>
#include <string>

int main() {

	std::string s;
	getline(std::cin, s);

	int cnt = 1;

	for (auto c : s)
	{
		if (isspace(c))
		{
			++cnt;
		}
	}
	std::cout << cnt;

	return 0;
}