#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, temp = 0, j = 0, numOfSameElement = 0, numOfPairs = 0;

	//инициализация вектора
	std::cin >> n;
	std::vector <int> a(n);

	//считываем данные в массив:
	for (i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	//определение числа пар элементов
	for (i = 0; i < n; ++i)
	{
		//выбран i-ый элемент
		temp = a[i];
		for (j = i + 1; j < n; ++j)
		{
			//сверяем со всем циклом
			//кроме i-го и раньше
			if (temp == a[j])
			{
				++numOfSameElement;
			}
		}
		//считаем число пар
		numOfPairs += numOfSameElement;
		//обнуляем счётчик одинаковых элементов
		numOfSameElement = 0;

	}

	//вывод
	std::cout << numOfPairs;

	return 0;
	return 0;
}