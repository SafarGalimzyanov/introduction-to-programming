#include <iostream>
#include <vector>

int main() {
	int n = 0, m = 0, i = 0, j = 0, col1 = 0, col2 = 0, temp = 0;

	//���������� ������� �������
	std::cin >> n >> m;

	//�������� �� ���� �������� �������
	if (n < 1 || m < 1)
	{
		return 0;
	}

	//������������� ���������� �������
	std::vector<std::vector<int>> array(n, std::vector<int>(m));

	for (; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			std::cin >> array[i][j];
		}
	}

	//���������� ������� ��������
	std::cin >> col1 >> col2;

	//����� �������� � ��������
	for (i = 0; i < n; ++i)
	{
		temp = array[i][col1];
		array[i][col1] = array[i][col2];
		array[i][col2] = temp;
	}

	//�����
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}