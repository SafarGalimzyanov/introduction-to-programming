#include <iostream>
#include <set>
#include <algorithm>

int main() {

	//���������� ������� ����
	int sze;
	std::cin >> sze;

	//���������� ���-�� ��� ����� � ��������
	int n;
	std::cin >> n;

	//������ ��������� �������� ����� � ��������
	std::set <int> a;
	for (int temp = 0, i = 0; i < n; ++i)
	{
		std::cin >> temp;
		a.insert(temp);
	}

	//���-�� ���������� �����
	int cnt = 0;

	//�������� �����
	for (auto now : a)
	{
		if (now >= sze)
		{
			sze = now + 3; //���������� ������ ������� �����
			++cnt;
		}
	}

	//�����
	std::cout << cnt;

	return 0;
}