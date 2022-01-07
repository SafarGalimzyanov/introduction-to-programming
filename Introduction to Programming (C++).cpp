#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>

bool rule_of_sort(std::pair <int, std::string> a, std::pair <int, std::string> b)
{
	return a.first > b.first;
}

int main() {

	//кол-во учеников
	int n;
	std::cin >> n;

	//заполнение списка учеников
	std::vector <std::pair <int, std::string>> list(n);
	for (int i = 0; i < n; ++i)
	{
		std::string last_name, first_name;
		int math_score = 0, physics_score = 0, it_score = 0;
		std::cin >> last_name >> first_name >> math_score >> physics_score >> it_score;
		list[i] = { math_score + physics_score + it_score, last_name + " " + first_name };
	}

	stable_sort(list.begin(), list.end(), rule_of_sort);

	//вывод
	for (auto now : list)
	{
		std::cout << now.second << std::endl;
	}

	return 0;
}