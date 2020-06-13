#include <bits/stdc++.h>

int main() {

    std::ifstream infile("INPUT.TXT");
    int a = 0, b = 0;
    infile >> a >> b;

    std::ofstream outfile("OUTPUT.TXT");
    outfile << a + b;

    return 0;
}