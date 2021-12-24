#include <iostream>

int main() {
    int temp, n, m, x, y = 0;
    std::cin >> n >> m >> x >> y;
    if (n > m)
    {
        temp = m;
        m = n;
        n = temp;
    }
    if (y <= m - y && y <= n - x && y <= x)
    {
        std::cout << y;
    }
    else if (x <= m - y && x <= n - x && x <= y)
    {
        std::cout << x;
    }
    else if (m - y <= n - x)
    {
        std::cout << m - y;
    }
    else std::cout << n - x;

    return 0;
}