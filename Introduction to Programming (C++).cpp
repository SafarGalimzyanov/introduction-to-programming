#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, temp = 0;

	//определение вектора
	std::cin >> n;
	std::vector <int> a(n);

	for (i = 0; i < n - 1; i += 2)
	{
		std::cin >> a[i];
		std::cin >> a[i + 1];
		temp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temp;

	}

	//если число элементов нечЄтное, последний элемент считываем в последнюю €чейку
	//т.к. отсчЄт идЄт от нул€, то индекс последней €чейки n-1
	if (n % 2 != 0)
	{
		std::cin >> a[n - 1];
	}

	//вывод
	for (i = 0; i < n; ++i)
	{
		std::cout << a[i] << " ";
	}
	return 0;
}