#include <iostream>

double power(double a, int n)
{
	if (n > 0)
	{
		--n;
		return a * power(a, n);
	}
	else if (n < 0)
	{
		++n;
		return (1 / a) * power(a, n);
	}
	else
	{
		return 1;
	}
}

int main() {

	//������������� ����������
	double a = 0;
	int n = 0;

	//���������� ��������
	std::cin >> a >> n;

	//�����
	std::cout << power(a, n);

	return 0;
}