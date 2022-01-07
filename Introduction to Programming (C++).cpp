#include <iostream>
#include <cmath>

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {

	//������������� ����������
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	//���������� ��������
	std::cin >> x1 >> y1 >> x2 >> y2;
	//�����
	std::cout << distance(x1, y1, x2, y2);

	return 0;
}