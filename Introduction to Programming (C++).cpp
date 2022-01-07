#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>


int main() {

	//���������� ����� ����������
	int n;
	std::cin >> n;

	//������ ����������
	std::vector <std::pair <int, int>> list(n);

	//���������� �������
	for (int i = 0; i < n; ++i)
	{
		std::cin >> list[i].second >> list[i].first;
		list[i].first = -list[i].first;
	}

	//����������
	sort(list.begin(), list.end());

	//�����
	for (auto now : list)
	{
		std::cout << now.second << " " << -now.first << std::endl;
	}

	return 0;
}