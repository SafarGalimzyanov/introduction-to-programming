#include <iostream>
#include <vector>

int main() {
	int n = 0, i = 0;
	std::cin >> n;
	std::vector <int> a(n);
	std::cin >> a[i];

	//проверка на массив размером один
	if (n == 1)
	{
		return 0;
	}
	else {}
	for (i = 1; i < n; ++i)
	{
		std::cin >> a[i];
		if (a[i] / a[i - 1] > 0)
		{
			if (a[i] > a[i - 1])
			{
				std::cout << a[i - 1] << " " << a[i];
			}

			else
			{
				std::cout << a[i] << " " << a[i - 1];
			}
			return 0;
		}
	}

	return 0;
}