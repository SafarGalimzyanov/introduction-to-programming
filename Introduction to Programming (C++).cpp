#include <iostream>
#include <vector>

int main() {

	int n = 0, m = 0, i = 0, j = 0, value = 2, max = 0, temp = 0, cnt = 0;

	//���������� ������� �������
	std::cin >> n >> m;

	//�������� �� ���� �������� �������
	if (n < 1 || m < 1)
	{
		return 0;
	}

	//������������� ���������� ������� ������
	std::vector<std::vector<int>> array(n, std::vector<int>(m, 1));

	//������������ ��������
	max = n * m;
	int minI = 0, maxI = n - 1, minJ = 0, maxJ = m - 1;

	for (; true;)
	{

		//������
		for (; j < maxJ && value < max + 1; ++value)
		{
			++j;
			array[i][j] = value;
		}
		minI = i + 1;

		//����
		for (; i < maxI && value < max + 1; ++value)
		{
			++i;
			array[i][j] = value;
		}
		maxJ = j - 1;

		//�����
		for (; j > minJ && value < max + 1; ++value)
		{
			--j;
			array[i][j] = value;
		}

		maxI = i - 1;


		//�����
		for (; i > minI && value < max + 1; ++value)
		{
			--i;
			array[i][j] = value;
		}

		minJ = j + 1;

		if (value > max)
		{
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
	}

	return 0;
}