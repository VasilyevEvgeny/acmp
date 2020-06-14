#include <bits/stdc++.h>
#include <vector>

std::ostream& operator<< (std::ostream& os, const std::vector<int>& v) {
    for (const auto& e : v) { os << e << " "; }

    return os;
}

int main() {

    std::ifstream infile("INPUT.TXT");
    std::ofstream outfile("OUTPUT.TXT");

    std::vector<int> odd, even;

    int N = 0;
    infile >> N;
    int var = 0;
    for (size_t i = 0; i < N; ++i) {
        infile >> var;
        if (var % 2) { odd.push_back(var); }
        else { even.push_back(var); }
    }

    outfile << odd << std::endl;
    outfile << even << std::endl;
    std::string is_four = odd.size() <= even.size() ? "YES" : "NO";
    outfile << is_four;

    return 0;
}