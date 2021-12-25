#include <iostream>

int main() {
	int f = 1;
	int f1 = 0;
	int f2 = 0;
	int i = 1;
	int a = 0;
	std::cin >> a;
	if (a == 2)
	{
		std::cout << 3;
	}
	else
	{
		while (f < a)
		{
			f2 = f1;
			f1 = f;
			f = f1 + f2;
			++i;
		}
		if (a % f == 0)
		{
			std::cout << i;
		}
		else
		{
			std::cout << -1;
		}
	}

	return 0;
}