#include <iostream>

bool IsPointInSquare(double x, double y)
{
	return x * x <= 1 && y * y <= 1;
}

int main() {

	//������������� ����������
	double x = 0, y = 0;

	//���������� ��������
	std::cin >> x >> y;

	//�����
	if (IsPointInSquare(x, y))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return 0;
}