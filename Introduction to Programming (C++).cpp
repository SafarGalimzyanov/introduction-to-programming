#include <iostream>

int main() {
    int n, m, k = 0;
    std::cin >> n >> m >> k;
    if (k % n == 0 || k % m == 0)
    {
        if (k > (n * m - n) && k > (n * m - m))
        {
            std::cout << "NO";
        }
        else
        {
            std::cout << "YES";
        }
    }

    else std::cout << "NO";
    return 0;
}