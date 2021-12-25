#include <iostream>
#include <vector>

int main() {
	int i = 0, j = 0, start = 0, end = 0, numOfPins = 0, numOfThrows = 0;

	//����� ������ � �������
	std::cin >> numOfPins;
	std::cin >> numOfThrows;

	//������������� ������� ������
	std::vector <int> pins(numOfPins);
	//��� ����� ����
	//������ ��� �� ��������� � � ��������������� ������ (�� � ����� ����) ���������� �������
	for (i = 0; i < numOfThrows * 2; i += 2)
	{
		std::cin >> j;
		std::cin >> end;
		for (; j <= end; ++j)
		{
			pins[j - 1] = 1;
		}
	}

	//�����
	for (j = 0; j < numOfPins; ++j)
	{
		if (pins[j] == 0)
		{
			std::cout << "I";
		}
		else
		{
			std::cout << ".";
		}
	}
	return 0;
}