#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

bool DistSort(std::pair <int, int> a, std::pair <int, int> b)
{
	return (a.first * a.first + a.second * a.second) < (b.first * b.first + b.second * b.second);
}

int main() {

	//кол-во точек
	int n;
	std::cin >> n;

	//заполнение списка
	std::vector <std::pair <int, int>> list(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> list[i].first >> list[i].second;
	}

	sort(list.begin(), list.end(), DistSort);

	for (auto now : list)
	{
		std::cout << now.first << " " << now.second << std::endl;
	}

	return 0;
}