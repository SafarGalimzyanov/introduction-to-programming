#include <iostream>
#include <set>
#include <algorithm>

int main() {

	//считывание размера ноги
	int sze;
	std::cin >> sze;

	//считывание кол-ва пар обуви в магазине
	int n;
	std::cin >> n;

	//массив имеющихся размеров обуви в магазине
	std::set <int> a;
	for (int temp = 0, i = 0; i < n; ++i)
	{
		std::cin >> temp;
		a.insert(temp);
	}

	//кол-во подходящей обуви
	int cnt = 0;

	//надеваем обувь
	for (auto now : a)
	{
		if (now >= sze)
		{
			sze = now + 3; //запоминаем размер надетой обуви
			++cnt;
		}
	}

	//вывод
	std::cout << cnt;

	return 0;
}