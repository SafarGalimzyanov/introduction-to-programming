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

	for (; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			if (i > j)
			{
				array[i][j] = i - j;
				array[j][i] = i - j;
			}
			else
			{
				array[i][j] = j - i;
				array[j][i] = j - i;
			}
		}
	}

	//вывод
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}