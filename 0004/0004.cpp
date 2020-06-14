#include <bits/stdc++.h>
#include <vector>

int solve(int x) {
    return x * 100 + 9 * 10 + (9 - x) * 1;
}

int main() {
    std::vector<int> ks;
    std::ifstream infile("INPUT.TXT");
    int x = 0;
    while (infile >> x) { ks.push_back(x); }

    std::ofstream outfile("OUTPUT.TXT");
    for (const auto& e : ks) { outfile << solve(e) << std::endl; }

    return 0;
}