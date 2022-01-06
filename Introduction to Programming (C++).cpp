#include <iostream>
#include <vector>

int main() {
	int n = 0, m = 0, i = 0, j = 0, k = 0;

	//считывание размера вектора
	std::cin >> n >> m;

	//проверка на ввод нулевого вектора
	if (n < 1 || m < 1)
	{
		return 0;
	}

	//инициализация двумерного вектора
	std::vector<std::vector<int>> array(n, std::vector<int>(m));

	for (; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			std::cin >> array[i][j];
		}
	}

	//инициализация транспонированного двумерного вектора
	std::vector<std::vector<int>> transpose(m, std::vector<int>(n));

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			transpose[j][i] = array[i][j];
		}
	}

	for (i = 0; i < m; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			std::cout << transpose[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}