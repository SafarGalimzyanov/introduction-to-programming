#include <iostream>
#include <vector>

int main() {
	int i = 0, j = 0;

	//������������� �������
	std::vector <int> array(16);

	//���������� ������ � ������
	for (; i < 16; ++i)
	{
		std::cin >> array[i];
	}

	for (i = 0; i < 16; i += 2)
	{
		//������ i-�� �������
		for (j = i + 2; j < 16; j += 2)
		{
			if (array[i] == array[j] || array[i + 1] == array[j + 1]
				|| array[i] - array[i + 1] == array[j] - array[j + 1]
				|| array[i] + array[i + 1] == array[j] + array[j + 1])
			{
				std::cout << "YES";
				//��������� ���������, ���� ����� ���� ���� �����
				return 0;
			}
			else {}
		}
	}

	std::cout << "NO";
	return 0;
}