#include <iostream>
#include <vector>
#include <algorithm>

int main() {

	int n;
	std::cin >> n;

	std::vector <int> a(n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> a[i];
	}

	sort(a.begin(), a.end());

	for (auto now : a)
	{
		std::cout << now << " ";
	}

	return 0;
}