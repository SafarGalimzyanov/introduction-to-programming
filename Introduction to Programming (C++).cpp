#include <iostream>

int main() {
	int r = 0, k = 0, p = 0, y = 0, i = 0;
	std::cin >> p >> r >> k >> y;
	k = (r * 100 + k);
	while (i < y)
	{
		k = k * (p + 100) / 100;
		++i;
	}
	r = k / 100;
	k = k % 100;
	std::cout << r << " " << k;
	return 0;
}