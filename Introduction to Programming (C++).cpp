#include <iostream>
#include <vector>

int main() {
	int n = 0, m = 0, i = 0, j = 0, k = 0, numOfEmptySeats = 0;

	//���������� ������� �������
	std::cin >> n >> m;

	//�������� �� ���� �������� �������
	if (n < 1 || m < 1)
	{
		return 0;
	}

	//������������� ���������� �������
	std::vector<std::vector<int>> seats(n, std::vector<int>(m));

	for (; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			std::cin >> seats[i][j];
		}
	}

	//���������� ���������� ����
	std::cin >> k;

	if (k > m)
	{
		std::cout << 0;
		return 0;
	}

	//����� ��������� ����
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			if (seats[i][j] == 0)
			{
				++numOfEmptySeats;
			}
			else
			{
				//�������� �������, ���� ����� ������
				numOfEmptySeats = 0;
			}
			if (numOfEmptySeats == k)
			{
				//�����, ���� ����� ��� � k ��������� ����
				std::cout << i + 1;
				return 0;
			}
		}
		numOfEmptySeats = 0;
	}

	//�����
	std::cout << 0;
	return 0;
}