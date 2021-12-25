#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 1;

	//инициализация вектора
	std::cin >> n;
	std::vector <int> a(n);

	//считываем данные в массив:
	//отсчёт идёт от единицы, чтобы последний элемент с индексом n
	//занял место n % n = 0
	for (; i <= n; ++i)
	{
		std::cin >> a[i % n];
	}

	for (int i : a)
	{
		std::cout << i << " ";
	}
	return 0;
}