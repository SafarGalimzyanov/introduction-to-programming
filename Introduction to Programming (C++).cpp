#include <iostream>
#include <set>

int main() {
	std::set <int> s;
	int n;
	std::cin >> n;
	for (int i = 0, x = 0; i < n; ++i)
	{
		std::cin >> x;
		s.insert(x);
	}
	int m, cnt = 0;
	std::cin >> m;
	for (int i = 0, x = 0; i < m; ++i)
	{
		std::cin >> x;
		if (s.find(x) != s.end())
		{
			++cnt;
		}
	}
	std::cout << cnt;

	return 0;
}