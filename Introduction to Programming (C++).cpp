#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, temp = 0;

	//����������� �������
	std::cin >> n;
	std::vector <int> a(n);

	//���� �������������
	for (i = 0; i < n; ++i)
	{
		std::cin >> a[i];
		if (a[i] > 0)
		{
			temp = a[i];
			//������� �� ����� � ��������� �������� � ��� ��������
			break;
		}
	}
	//���� ����� ������ ���������� � ���������� ������������������
	++i; //��� ����� �������� �� ��������� ���������
	for (; i < n; ++i)
	{
		std::cin >> a[i];
		if (a[i] > 0 && a[i] < temp)
		{
			temp = a[i];
		}
	}
	//�����
	std::cout << temp;
	return 0;
}