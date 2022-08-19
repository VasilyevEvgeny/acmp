#include <iostream>

int main() {

    size_t n = 0, m = 0;
    std::cin >> n >> m;
    size_t l_to_r = n % m;
    size_t r_to_l = m % n;
    if (l_to_r && r_to_l) {
        std::cout << "666";
    } else {
        std::cout << "1";
    }
    return 0;
}