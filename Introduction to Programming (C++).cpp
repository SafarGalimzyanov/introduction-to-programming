#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, j = 0, k = 0;

	//считывание размера вектора
	std::cin >> n;

	//проверка на ввод нулевого вектора
	if (n < 1)
	{
		return 0;
	}

	//инициализация двумерного вектора
	std::vector<std::vector<int>> array(n, std::vector<int>(n));

	for (; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			std::cin >> array[i][j];
		}
	}

	//считывание номера диагонали
	std::cin >> k;

	//выбор оси для начального смещения
	if (k > 0)
	{
		i = k;
		j = 0;
	}
	else
	{
		j = -k;
		i = 0;
	}

	//вывод
	for (; i < n && j < n; ++i, ++j)
	{
		std::cout << array[i][j] << " ";
	}
	return 0;
}