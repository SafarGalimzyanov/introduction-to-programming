#include <iostream>

bool IsPointInSquare(double x, double y)
{
	return x * x <= 1 && y * y <= 1;
}

int main() {

	//инициализация переменных
	double x = 0, y = 0;

	//считывание значений
	std::cin >> x >> y;

	//вывод
	if (IsPointInSquare(x, y))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return 0;
}