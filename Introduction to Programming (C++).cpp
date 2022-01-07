#include <iostream>
#include <set>

int main() {
	std::set <int> s;
	int n;
	std::cin >> n;
	for (int i = 0, x = 0; i < n; i++)
	{
		std::cin >> x;
		if (s.find(x) != s.end())
		{
			std::cout << "YES\n";
		}
		else
		{
			std::cout << "NO\n";
		}
		s.insert(x);
	}

	return 0;
}