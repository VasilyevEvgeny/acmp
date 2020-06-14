#include <bits/stdc++.h>

int main() {

    std::ifstream infile("INPUT.TXT");
    int A = 0, B = 0, C = 0;
    infile >> A >> B >> C;

    std::ofstream outfile("OUTPUT.TXT");
    std::string result = (A * B == C) ? "YES" : "NO";
    outfile << result;

    return 0;
}