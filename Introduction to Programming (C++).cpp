#include <iostream>

int main() {
    int v, t = 0;
    std::cin >> v >> t;
    std::cout << (v * t % 109 + 109) % 109;
    return 0;
}