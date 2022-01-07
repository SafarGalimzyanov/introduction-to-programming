#include <iostream>

bool IsPointInSquare(double x, double y, double xc, double yc, double r)
{
	return ((y - yc) * (y - yc) + (x - xc) * (x - xc) <= r * r);
}

int main() {

	//инициализация переменных
	double x = 0, y = 0, xc = 0, yc = 0, r = 0;

	//считывание значений
	std::cin >> x >> y >> xc >> yc >> r;

	//вывод
	if (IsPointInSquare(x, y, xc, yc, r))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return 0;
}