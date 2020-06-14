#include <bits/stdc++.h>

int main() {
    std::ifstream infile("INPUT.TXT");
    int N = 0;
    infile >> N;

    std::ofstream outfile("OUTPUT.TXT");
    if (!N) { outfile << 1; }
    else if (N > 0) { outfile << (N + 1) * N / 2; }
    else { outfile << (N - 1) * abs(N) / 2 + 1; }

    return 0;
}