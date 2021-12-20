#include <iostream>

int main() {
    int h, a, b = 0;
    std::cin >> h >> a >> b;
    std::cout << (h - b + a - b - 1) / (a - b);
    return 0;
}