#include <iostream>

double power(double  num, int pow)
{
	if (pow == 0)
	{
		return 1;
	}
	if (pow % 2 != 0)
	{
		return num * power(num * num, pow / 2);
	}
	else
	{
		return power(num * num, pow / 2);
	}
}

int main() {

	//инициализация переменных
	double num = 0;
	int pow = 0;

	//считывание значений
	std::cin >> num >> pow;

	//вывод
	std::cout << power(num, pow);

	return 0;
}