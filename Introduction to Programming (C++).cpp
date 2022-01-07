#include <iostream>

bool MinDivisor(int num)
{
	if (num % 2 == 0)
	{
		if (num == 2)
		{
			return true;
		}
		return false;
	}

	//������������� ������������ ��������
	int min = 3, q = 9, s = 8;

	//����
	for (; q <= num; min += 2, s += 8, q += s)
	{
		if (num % min == 0)
		{
			//������� ��������
			return false;
		}
	}

	//������� ��������
	return true;
}

int main() {

	//������������� ����������
	int num = 0;

	//���������� ��������
	std::cin >> num;

	//�����
	if (MinDivisor(num))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return 0;
}