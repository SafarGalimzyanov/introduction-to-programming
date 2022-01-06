#include <iostream>
#include <vector>

int main() {

	int n = 0, m = 0, i = 0, j = 0, value = 2, max = 0, temp = 0, cnt = 0;

	//считывание размера вектора
	std::cin >> n >> m;

	//проверка на ввод нулевого вектора
	if (n < 1 || m < 1)
	{
		return 0;
	}

	//инициализация двумерного вектора нулями
	std::vector<std::vector<int>> array(n, std::vector<int>(m, 1));

	//максимальное значение
	max = n * m;
	int minI = 0, maxI = n - 1, minJ = 0, maxJ = m - 1;

	for (; true;)
	{

		//вправо
		for (; j < maxJ && value < max + 1; ++value)
		{
			++j;
			array[i][j] = value;
		}
		minI = i + 1;

		//вниз
		for (; i < maxI && value < max + 1; ++value)
		{
			++i;
			array[i][j] = value;
		}
		maxJ = j - 1;

		//влево
		for (; j > minJ && value < max + 1; ++value)
		{
			--j;
			array[i][j] = value;
		}

		maxI = i - 1;


		//вверх
		for (; i > minI && value < max + 1; ++value)
		{
			--i;
			array[i][j] = value;
		}

		minJ = j + 1;

		if (value > max)
		{
			//вектор заполнен,
			//выводим его и выходим из программы
			{
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
			}
			return 0;
		}
	}

	return 0;
}