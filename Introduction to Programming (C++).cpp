#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 1;

	//������������� �������
	std::cin >> n;
	std::vector <int> a(n);

	//��������� ������ � ������:
	//������ ��� �� �������, ����� ��������� ������� � �������� n
	//����� ����� n % n = 0
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