#include <iostream>

int main() {
	int n = 0;
	int A, B, b, a = 0;

	std::cin >> n;
	A = n / 1000;
	B = n % 1000 / 100;
	b = n % 100 / 10;
	a = n % 10;
	std::cout << A + B - b - a + A + b - B - a + A - a + B - b + 1;

	return 0;
}