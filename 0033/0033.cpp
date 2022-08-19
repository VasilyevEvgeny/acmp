#include <iostream>

int main() {
    int g = 0, l = 0;
    std::cin >> g >> l;
    int summ = g + l - 1;
    std::cout << summ - g << " " << summ - l << std::endl;


    return 0;
}