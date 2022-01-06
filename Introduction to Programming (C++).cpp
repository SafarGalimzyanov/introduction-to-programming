#include <iostream>
#include <vector>

int main() {
	int n = 0, m = 0, i = 0, j = 0, k = 0;

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

	//������������� ������������������ ���������� �������
	std::vector<std::vector<int>> turned(m, std::vector<int>(n));

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			turned[j][n - i - 1] = array[i][j];
		}
	}

	for (i = 0; i < m; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			std::cout << turned[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}