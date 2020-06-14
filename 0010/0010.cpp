#include <bits/stdc++.h>
#include <vector>

#define VERBOSE false


std::ostream& operator<< (std::ostream& os, const std::vector<int>& v) {
    for (const auto& e : v) { os << e << " "; }

    return os;
}


std::vector<int> solve(const int A, const int B, const int C, const int D) {
    std::vector<int> solution;
    for (int i = -100; i <= 100; ++i) {
        if (A * std::pow(i, 3) + B * std::pow(i, 2) + C * i + D == 0) {
            if (solution.empty()) { solution.push_back(i); }
            else {
                if (solution[solution.size() - 1] != i) {
                    solution.push_back(i);
                }
            }
            if (VERBOSE) { std::cout << "solution = " << solution << std::endl; }
        }
    }

    return solution;
}


int main() {

    std::ifstream infile("INPUT.TXT");
    int A = 0, B = 0, C = 0, D = 0;
    infile >> A >> B >> C >> D;

    if (VERBOSE) { std::cout << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl; }

    auto result = solve(A, B, C, D);

    std::ofstream outfile("OUTPUT.TXT");
    outfile << result << std::endl;

    return 0;
}