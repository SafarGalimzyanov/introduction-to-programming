#include <iostream>
#include <set>

int main() {
	std::set <int> s;
	int n;
	std::cin >> n;
	for (int i = 0, x = 0; i < n; i++)
	{
		std::cin >> x;
		s.insert(x);
	}
	std::cout << s.size();

	return 0;
}