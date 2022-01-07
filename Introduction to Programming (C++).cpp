#include <iostream>

int MinDivisor(int num)
{
	if (num % 2 == 0)
	{
		return 2;
	}

	//������������� ������������ ��������
	int min = 3, q = 9, s = 8;

	//����
	for (; q <= num; min += 2, s += 8, q += s)
	{
		if (num % min == 0)
		{
			//������� ��������
			return min;
		}
	}

	//������� ��������
	return num;
}

int main() {

	//������������� ����������
	int num = 0;

	//���������� ��������
	std::cin >> num;

	//�����
	std::cout << MinDivisor(num);

	return 0;
}