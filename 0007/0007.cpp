#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

#define VERBOSE true


template<typename T>
std::ostream& operator<< (std::ostream& os, const std::vector<T>& v) {
    for (const auto& e : v) { os << e << " "; }

    return os;
}


std::vector<std::string> parse(const std::string& numbers) {
    std::vector<std::string> res;
    std::string cur;
    size_t i = 0;
    for (const auto& c : numbers) {
        if (i == numbers.length() - 1) {
            cur += c;
            res.push_back(cur);
            cur = "";
        }
        else if (c == ' ') {
            res.push_back(cur);
            cur = "";
        }
        else {
            cur += c;
        }
        ++i;
    }

    return res;
}


int main() {

    std::ifstream infile("INPUT.TXT");
    std::string numbers;
    std::getline(infile, numbers);

    auto parsed = parse(numbers);

    if (VERBOSE) { std::cout << parsed << std::endl; }

    auto maximum = *std::max_element(parsed.begin(), parsed.end(), [](const std::string& lhs, const std::string& rhs) {
        if (lhs.length() != rhs.length()) { return lhs.length() < rhs.length(); }
        else {
            for (size_t i = 0; i < lhs.length(); ++i) {
                if (lhs[i] == rhs[i]) { continue; }
                else { return lhs[i] < rhs[i]; }
            }
            return false;
        }
    });

    std::ofstream outfile("OUTPUT.TXT");
    outfile << maximum;

    return 0;
}