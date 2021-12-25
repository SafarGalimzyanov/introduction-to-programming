#include <iostream>

int main() {
	int n = 0; int p = 0; int i = 0; int k = 0;
	std::cin >> n;
	p = n;
	while (n != 0)
	{
		if (p == n)
		{
			++i;
			if (k < i)
			{
				k = i;
			}
		}
		else
		{
			i = 1;
		}
		p = n;
		std::cin >> n;
	}
	std::cout << k;
	return 0;
}