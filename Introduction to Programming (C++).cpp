#include <iostream>

int main() {
	int n = 0;
	std::cin >> n;
	std::cout << n / 3600 % 24
		<< ":"
		<< n / 60 % 60 / 10
		<< n / 60 % 60 % 10
		<< ":"
		<< n % 60 / 10
		<< n % 60 % 10;
	return 0;
}