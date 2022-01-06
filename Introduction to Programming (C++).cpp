#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, j = 0, k = 0;

	//���������� ������� �������
	std::cin >> n;

	//�������� �� ���� �������� �������
	if (n < 1)
	{
		return 0;
	}

	//������������� ���������� �������
	std::vector<std::vector<int>> array(n, std::vector<int>(n));

	for (; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			std::cin >> array[i][j];
		}
	}

	//���������� ������ ���������
	std::cin >> k;

	//����� ��� ��� ���������� ��������
	if (k > 0)
	{
		i = k;
		j = 0;
	}
	else
	{
		j = -k;
		i = 0;
	}

	//�����
	for (; i < n && j < n; ++i, ++j)
	{
		std::cout << array[i][j] << " ";
	}
	return 0;
}