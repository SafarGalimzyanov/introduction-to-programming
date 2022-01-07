#include <iostream>

double sum(double  num)
{
	std::cin >> num;
	if (num != 0)
	{
		return num + sum(num);
	}
	return 0;
}

int main() {

	//считывание значений

	std::cout << sum(0);

	return 0;
}