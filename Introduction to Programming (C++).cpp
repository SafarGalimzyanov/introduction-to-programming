#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, j = 0, numOfSameElement = 0;

	//������������� �������
	std::cin >> n;
	std::vector <int> array(n);

	//���������� ������ � ������
	for (; i < n; ++i)
	{
		std::cin >> array[i];
	}

	//����� ��������
	for (i = 0; i < n; ++i)
	{
		//������ i-�� �������

		//������� �� ���� ������
		for (j = 0; j < n; ++j)
		{
			if (array[i] == array[j])
			{
				//������� ����� �������� �������� a[i]
				++numOfSameElement;
			}
			else {}
		}
		//���� �� ���� ������� �������, �������
		if (numOfSameElement == 1)
		{
			std::cout << array[i] << " ";
		}
		else {}

		//��������� ��������
		numOfSameElement = 0;

	}
	return 0;
}