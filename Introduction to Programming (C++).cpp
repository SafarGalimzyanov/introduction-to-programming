#include <iostream>

int main() {

	double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	double k = 0, n = 0, x = 0, y = 0, detX = 0, detY = 0, detM;
	std::cin >> a >> b >> c >> d >> e >> f;
	detX = (e * d) - (b * f);
	detY = (a * f) - (c * e);
	detM = (a * d) - (b * c);
	if (detM != 0)
	{
		std::cout << "2" << " " << detX / detM << " " << detY / detM;
		return 0;
	}
	else
	{
		if (detX == 0 && detY == 0)
		{
			if (a == 0 && b == 0 && c == 0 && d == 0)
			{
				if (e != 0 || f != 0)
				{
					std::cout << "0";
					return 0;
				}
				else
				{
					std::cout << "5";
					return 0;
				}
			}
			else
			{
				if (a == 0 && c == 0)
				{
					if (b != 0)
					{
						y = e / b;
						std::cout << "4" << " " << y;
						return 0;
					}
					else
					{
						y = f / d;
						std::cout << "4" << " " << y;
						return 0;
					}
				}
				else
				{
					if (b == 0 && d == 0)
					{
						if (a != 0)
						{
							x = e / a;
							std::cout << "3" << " " << x;
							return 0;
						}
						else
						{
							x = f / c;
							std::cout << "3" << " " << x;
							return 0;
						}
					}
					if (b != 0)
					{
						n = e / b;
						k = -a / b;
						std::cout << "1" << " " << k << " " << n;
						return 0;
					}
					else
					{
						n = f / d;
						k = -c / d;
						std::cout << "1" << " " << k << " " << n;
						return 0;
					}
				}
			}

		}
		else
		{
			std::cout << "0";
			return 0;
		}
	}

	return 0;
}