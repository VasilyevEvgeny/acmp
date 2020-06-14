#include <bits/stdc++.h>
#include <vector>

std::pair<int, int> calculate(const std::vector<int>& v) {
    int sum_of_positives = 0;
    int multiplication = 1;
    int min_element = 1e9, max_element = -1e9;
    int min_idx = 0, max_idx = 0;
    for (size_t i = 0; i < v.size(); ++i) {
        if (v[i] > 0) { sum_of_positives += v[i]; }
        if (v[i] < min_element) { min_element = v[i]; min_idx = i; }
        if (v[i] > max_element) { max_element = v[i]; max_idx = i; }
    }

    auto left_idx = std::min(min_idx, max_idx);
    auto right_idx = std::max(min_idx, max_idx);
    for (size_t i = left_idx + 1; i < right_idx; ++i) { multiplication *= v[i]; }

    return {sum_of_positives, multiplication};
}

int main() {

    std::ifstream infile("INPUT.TXT");
    int N = 0;
    infile >> N;

    std::vector<int> v(N);
    for (size_t i = 0; i < N; ++i) { infile >> v[i]; }

    auto result = calculate(v);

    std::ofstream outfile("OUTPUT.TXT");
    outfile << result.first << " " << result.second;

    return 0;
}