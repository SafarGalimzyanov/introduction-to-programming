#include <iostream>
#include <vector>

int main() {
	int n = 0, m = 0, i = 0, j = 0, k = 0, numOfEmptySeats = 0;

	//считывание размера вектора
	std::cin >> n >> m;

	//проверка на ввод нулевого вектора
	if (n < 1 || m < 1)
	{
		return 0;
	}

	//инициализация двумерного вектора
	std::vector<std::vector<int>> seats(n, std::vector<int>(m));

	for (; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			std::cin >> seats[i][j];
		}
	}

	//считывание количества мест
	std::cin >> k;

	if (k > m)
	{
		std::cout << 0;
		return 0;
	}

	//поиск свободных мест
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			if (seats[i][j] == 0)
			{
				++numOfEmptySeats;
			}
			else
			{
				//обнуляем счётчик, если место занято
				numOfEmptySeats = 0;
			}
			if (numOfEmptySeats == k)
			{
				//вывод, если нашли ряд с k свободных мест
				std::cout << i + 1;
				return 0;
			}
		}
		numOfEmptySeats = 0;
	}

	//вывод
	std::cout << 0;
	return 0;
}