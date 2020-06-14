#include <bits/stdc++.h>
#include <string>

#define VERBOSE true

bool is_correct_digit(char c) {
    return c >= '1' && c <= '8';
}

bool is_correct_letter(char c) {
    return c >= 'A' && c <= 'H';
}

bool is_movable(const std::pair<std::pair<char, char>, std::pair<char, char>>& coordinates) {
    if (VERBOSE) {
        std::cout << "coordinates.first.first = " << coordinates.first.first << std::endl;
        std::cout << "coordinates.first.second = " << coordinates.first.second << std::endl;
        std::cout << "coordinates.second.first = " << coordinates.second.first << std::endl;
        std::cout << "coordinates.second.second = " << coordinates.second.second << std::endl;
    }
    auto diff_letters = abs(coordinates.first.first - coordinates.second.first);
    auto diff_digits = abs(coordinates.first.second - coordinates.second.second);
    return diff_letters && diff_digits && abs(diff_digits + diff_letters) == 3;
}

std::string parse(const std::string& command) {
    bool correct = false;
    bool movable = false;
    if (command.length() == 5) {
        if (is_correct_letter(command[0]) &&
                is_correct_digit(command[1]) &&
                (command[2] == '-') &&
                is_correct_letter(command[3]) &&
                is_correct_digit(command[4])) {
            correct = true;
            if (is_movable({{command[0], command[1]},
                                      {command[3], command[4]}})) { movable = true; }
        }
    }

    if (correct) { if (movable) { return "YES"; } else { return "NO"; } } else { return "ERROR"; }
}

int main() {

    std::ifstream infile("INPUT.TXT");
    std::string command;
    std::getline(infile, command);

    std::ofstream outfile("OUTPUT.TXT");
    outfile << parse(command);

    return 0;
}