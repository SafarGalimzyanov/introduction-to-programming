#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0, j = 0;

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
			//�������� �� ����������� ������������ ���������
			if (j < i && array[i][j] != array[j][i])
			{
				//�����
				std::cout << "NO";
				return 0;
			}
		}
	}

	//�����
	std::cout << "YES";
	return 0;
}