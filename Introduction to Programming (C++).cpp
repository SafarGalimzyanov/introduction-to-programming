#include <iostream>

int main() {
	int f = 1;
	int f1 = 0;
	int f2 = 0;
	int i = 1;
	int n = 0;
	std::cin >> n;
	if (n == 0)
	{
		std::cout << 0;
	}
	if (n == 1)
	{
		std::cout << 1;
	}
	if (n > 1)
	{
		while (i < n)
		{
			f2 = f1;
			f1 = f;
			f = f1 + f2;
			++i;
		}
		std::cout << f;
	}

	return 0;
}