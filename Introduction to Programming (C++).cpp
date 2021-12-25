#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	int sum = 0, num = 0, i = 0;
	std::cin >> num;
	while (num != 0)
	{
		sum += num;
		std::cin >> num;
		++i;
	}
	std::cout << std::setprecision(11) << std::fixed << double(sum) / i;
	return 0;
}