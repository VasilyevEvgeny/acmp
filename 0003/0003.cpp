#include <bits/stdc++.h>
#include <vector>

using integer = uint64_t;

integer square(integer x) {
    integer div = x / 10;
    return div * (div + 1) * 100 + 25;
}

int main() {
    std::vector<integer> numbers;
    std::ifstream infile("INPUT.TXT");
    integer x = 0;
    while (infile >> x) { numbers.push_back(x); }

    std::ofstream outfile("OUTPUT.TXT");
    for (const auto& e : numbers) { outfile << square(e) << std::endl; }

    return 0;
}