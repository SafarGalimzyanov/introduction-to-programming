#include <iostream>
#include <set>

int main() {
	std::set <int> s1, s2;
	int n;
	std::cin >> n;
	for (int i = 0, x = 0; i < n; ++i)
	{
		std::cin >> x;
		s1.insert(x);
	}
	int m;
	std::cin >> m;
	for (int i = 0, x = 0; i < m; ++i)
	{
		std::cin >> x;
		s2.insert(x);
	}

	for (auto k : s1)
	{
		if (s2.find(k) != s2.end())
		{
			std::cout << k << " ";
		}
	}

	return 0;
}