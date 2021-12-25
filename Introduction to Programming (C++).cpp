#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, temp = 0;

	//определение вектора
	std::cin >> n;
	std::vector <int> a(n);

	//ищем положительное
	for (i = 0; i < n; ++i)
	{
		std::cin >> a[i];
		if (a[i] > 0)
		{
			temp = a[i];
			//выходим из цикла с найденным нечётным и его индексом
			break;
		}
	}
	//ищем числа меньше найденного в оставшейся последовательности
	++i; //это чтобы работать со следующим элементом
	for (; i < n; ++i)
	{
		std::cin >> a[i];
		if (a[i] > 0 && a[i] < temp)
		{
			temp = a[i];
		}
	}
	//вывод
	std::cout << temp;
	return 0;
}