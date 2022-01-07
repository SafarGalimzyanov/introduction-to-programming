#include <iostream>

double power(double a, int n)
{
	if (n > 0)
	{
		--n;
		return a * power(a, n);
	}
	else if (n < 0)
	{
		++n;
		return (1 / a) * power(a, n);
	}
	else
	{
		return 1;
	}
}

int main() {

	//инициализация переменных
	double a = 0;
	int n = 0;

	//считывание значений
	std::cin >> a >> n;

	//вывод
	std::cout << power(a, n);

	return 0;
}