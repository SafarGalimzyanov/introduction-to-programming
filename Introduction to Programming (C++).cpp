#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, j = 0, numOfSameElement = 0;

	//инициализация массива
	std::cin >> n;
	std::vector <int> array(n);

	//считывание данных в массив
	for (; i < n; ++i)
	{
		std::cin >> array[i];
	}

	//поиск повторов
	for (i = 0; i < n; ++i)
	{
		//выбран i-ый элемент

		//сверяем со всем циклом
		for (j = 0; j < n; ++j)
		{
			if (array[i] == array[j])
			{
				//считаем число повторов элемента a[i]
				++numOfSameElement;
			}
			else {}
		}
		//если не были найдены повторы, выводим
		if (numOfSameElement == 1)
		{
			std::cout << array[i] << " ";
		}
		else {}

		//обнуление счётчика
		numOfSameElement = 0;

	}
	return 0;
}