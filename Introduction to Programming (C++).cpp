#include <iostream>

int main() {
	int r = 0, k = 0, p = 0;
	std::cin >> p >> r >> k;
	k = (r * 100 + k);
	k = k * (p + 100) / 100;
	r = k / 100;
	k = k % 100;
	std::cout << r << " " << k;
	return 0;
}