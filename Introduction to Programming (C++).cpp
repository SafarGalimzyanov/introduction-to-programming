#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, temp = 0, j = 0, numOfSameElement = 0, numOfPairs = 0;

	//������������� �������
	std::cin >> n;
	std::vector <int> a(n);

	//��������� ������ � ������:
	for (i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	//����������� ����� ��� ���������
	for (i = 0; i < n; ++i)
	{
		//������ i-�� �������
		temp = a[i];
		for (j = i + 1; j < n; ++j)
		{
			//������� �� ���� ������
			//����� i-�� � ������
			if (temp == a[j])
			{
				++numOfSameElement;
			}
		}
		//������� ����� ���
		numOfPairs += numOfSameElement;
		//�������� ������� ���������� ���������
		numOfSameElement = 0;

	}

	//�����
	std::cout << numOfPairs;

	return 0;
	return 0;
}