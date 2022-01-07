#include <iostream>

int MinDivisor(int num)
{
	if (num % 2 == 0)
	{
		return 2;
	}

	//инициализация минимального делителя
	int min = 3, q = 9, s = 8;

	//цикл
	for (; q <= num; min += 2, s += 8, q += s)
	{
		if (num % min == 0)
		{
			//возврат значения
			return min;
		}
	}

	//возврат значения
	return num;
}

int main() {

	//инициализация переменных
	int num = 0;

	//считывание значений
	std::cin >> num;

	//вывод
	std::cout << MinDivisor(num);

	return 0;
}