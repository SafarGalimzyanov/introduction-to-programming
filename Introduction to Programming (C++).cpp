#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>


int main() {

	//считывание числа участников
	int n;
	std::cin >> n;

	//список участников
	std::vector <std::pair <int, int>> list(n);

	//заполнение вектора
	for (int i = 0; i < n; ++i)
	{
		std::cin >> list[i].second >> list[i].first;
		list[i].first = -list[i].first;
	}

	//сортировка
	sort(list.begin(), list.end());

	//вывод
	for (auto now : list)
	{
		std::cout << now.second << " " << -now.first << std::endl;
	}

	return 0;
}