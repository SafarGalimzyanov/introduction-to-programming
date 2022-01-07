#include <iostream>

bool MinDivisor(int num)
{
	if (num % 2 == 0)
	{
		if (num == 2)
		{
			return true;
		}
		return false;
	}

	//инициализация минимального делителя
	int min = 3, q = 9, s = 8;

	//цикл
	for (; q <= num; min += 2, s += 8, q += s)
	{
		if (num % min == 0)
		{
			//возврат значения
			return false;
		}
	}

	//возврат значения
	return true;
}

int main() {

	//инициализация переменных
	int num = 0;

	//считывание значений
	std::cin >> num;

	//вывод
	if (MinDivisor(num))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return 0;
}