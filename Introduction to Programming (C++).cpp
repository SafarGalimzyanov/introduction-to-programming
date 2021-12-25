#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, j = 0;

	//считывание размера вектора
	std::cin >> n;

	//проверка на ввод нулевого вектора
	if (n < 1)
	{
		return 0;
	}

	//инициализация двумерного вектора
	std::vector<std::vector<int>> array(n, std::vector<int>(n));



	//заполнение звёздочек единицами
	for (; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (i == j || i + j == n - 1 || i == n / 2 || j == n / 2)
			{
				array[i][j] = 1;
			}

		}
	}

	//вывод
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (array[i][j] == 1)
			{
				std::cout << "* ";
			}
			else
			{
				std::cout << ". ";
			}

		}
		std::cout << std::endl;
	}
	return 0;
}