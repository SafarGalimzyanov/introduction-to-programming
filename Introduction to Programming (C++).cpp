#include <iostream>
#include <vector>

int main() {
	int i = 0, j = 0, start = 0, end = 0, numOfPins = 0, numOfThrows = 0;

	//число кеглей и бросков
	std::cin >> numOfPins;
	std::cin >> numOfThrows;

	//инициализация вектора кеглей
	std::vector <int> pins(numOfPins);
	//тут лежат нули
	//теперь идём по значениям и в соответствующий индекс (но с минус один) записываем единицу
	for (i = 0; i < numOfThrows * 2; i += 2)
	{
		std::cin >> j;
		std::cin >> end;
		for (; j <= end; ++j)
		{
			pins[j - 1] = 1;
		}
	}

	//вывод
	for (j = 0; j < numOfPins; ++j)
	{
		if (pins[j] == 0)
		{
			std::cout << "I";
		}
		else
		{
			std::cout << ".";
		}
	}
	return 0;
}