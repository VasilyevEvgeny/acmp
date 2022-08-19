#include <iostream>

int main() {

    size_t x = 0;
    std::cin >> x;
    size_t summ = 0;
    for (size_t i = 0; i < 3; ++i) {
        summ += x % 10;
        x = x / 10;
    }
    std::cout << summ << std::endl;
    return 0;
}