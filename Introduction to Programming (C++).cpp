#include <iostream>

int min(int i, int j)
{
	return i < j ? i : j;
}

int min4(int a, int b, int c, int d)
{
	return min(a, b) < min(c, d) ? min(a, b) : min(c, d);
}

int main() {

	//������������� ����������
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	//���������� ��������
	std::cin >> num1 >> num2 >> num3 >> num4;
	//�����
	std::cout << min4(num1, num2, num3, num4);

	return 0;
}