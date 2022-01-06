#include <iostream>
#include <vector>

int main() {

	int n = 0, m = 0, i = 0, j = 0, r = 0, c = 0, value = 1, max = 0;

	//���������� ������� �������
	std::cin >> n >> m;

	//�������� �� ���� �������� �������
	if (n < 1 || m < 1)
	{
		return 0;
	}

	//������������� ���������� ������� ������
	std::vector<std::vector<int>> array(n, std::vector<int>(m));

	for (i = 0; i < n; ++i)
	{
		for (j = i % 2; j < m; j += 2, ++value)
		{
			array[i][j] = value;
		}
	}

	//������ ��������,
	//������� ��� � ������� �� ���������
	{
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < m; ++j)
			{
				if (array[i][j] < 10)
				{
					//���� ����� �����������, ������ ����� ��� ��� �������, � ����� - ����
					std::cout << "  " << array[i][j] << " ";
				}
				else if (array[i][j] < 100)
				{
					//���� ����� ����������, ������ ����� ��� ���� ������, � ����� - ����
					std::cout << " " << array[i][j] << " ";
				}
				else
				{
					//���� ����� ����������, ������ ����� ���� ���� ������
					std::cout << array[i][j] << " ";
				}

			}
			std::cout << std::endl;
		}
	}

	return 0;
}