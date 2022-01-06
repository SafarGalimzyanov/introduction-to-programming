#include <iostream>
#include <vector>

int main() {
	int n = 0, m = 0, i = 0, j = 0, evenRow = 0;

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
		for (j = 0, evenRow = i % 2; j < m; ++j)
		{
			//если ряд чётный, 
			//то остаётся только     этот член, если нечётный, то  этот
			array[i][j] = i * m + (j + 1) * (1 - evenRow) + (m - j) * (evenRow);
		}
	}

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			if (array[i][j] < 10)
			{
				//если число однозначное, ставим перед ним два пробела, а после - один
				std::cout << "  " << array[i][j] << " ";
			}
			else if (array[i][j] < 100)
			{
				//если число двузначное, ставим перед ним один пробел, а после - один
				std::cout << " " << array[i][j] << " ";
			}
			else
			{
				//если число трёхзначное, ставим после него один пробел
				std::cout << array[i][j] << " ";
			}

		}
		std::cout << std::endl;
	}
	return 0;
}