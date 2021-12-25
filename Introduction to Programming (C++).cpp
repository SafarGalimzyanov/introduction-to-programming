#include <iostream>
#include <vector>

int main() {
	int n = 0, m = 0, i = 0, j = 0, iMax = 0, jMax = 0;

	std::cin >> n >> m;

	//�������� �� ���� �������� �������
	if (n < 1 && m < 1)
	{
		return 0;
	}

	//������������� ���������� �������
	std::vector<std::vector<int>> array(n, std::vector<int>(m));

	//����� �������� �������� � ������ � ������� � ��������� ������
	for (; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			std::cin >> array[i][j];
			if (array[i][j] > array[iMax][jMax])
			{
				iMax = i;
				jMax = j;
			}
		}
	}

	//�����
	std::cout << iMax << " " << jMax;
	return 0;
}