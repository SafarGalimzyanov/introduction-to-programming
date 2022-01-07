#include <iostream>
#include <vector>

double fibonacci(int num, std::vector <int>& m)
{
	if (num > 2)
	{
		if (m[num] > 0)
		{
			return m[num];
		}
		else
		{
			return m[num] = fibonacci(num - 1, m) + fibonacci(num - 2, m);
		}

	}
	else
	{
		return 1;
	}
}

int main() {

	int num = 0;

	//считывание значений
	std::cin >> num;

	std::vector <int> array(num + 1, 0);

	//вывод
	std::cout << fibonacci(num, array);

	return 0;
}