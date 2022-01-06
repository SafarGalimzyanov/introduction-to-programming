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
			std::cin >> array[i][j];
			//проверка на неравенство симметричных элементов
			if (j < i && array[i][j] != array[j][i])
			{
				//вывод
				std::cout << "NO";
				return 0;
			}
		}
	}

	//вывод
	std::cout << "YES";
	return 0;
}