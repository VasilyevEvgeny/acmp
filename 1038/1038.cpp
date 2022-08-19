#include <iostream>

int main() {
    size_t N = 0;
    std::cin >> N;
    if (N % 10) {
        std::cout << N / 10 + 1;
    } else {
        std::cout << N / 10;
    }

    return 0;
}