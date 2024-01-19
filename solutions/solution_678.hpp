#ifndef SOLUTION_SOLUTION_678_HPP
#define SOLUTION_SOLUTION_678_HPP

#include <string>
#include <algorithm>
#include <iostream>

int nextPermutation(const int &value) {
    std::string str = std::to_string(value);
    int pivot = str.size() - 2;
    while (pivot >= 0 && str[pivot] >= str[pivot + 1]) {
        --pivot;
    }

    if (pivot >= 0) {
        int successor = str.size() - 1;
        while (successor >= 0 && str[successor] <= str[pivot]) {
            --successor;
        }
        
        std::swap(str[pivot], str[successor]);
    }

    std::reverse(str.begin() + pivot + 1, str.end());
    return std::stoi(str);
}

#endif // SOLUTION_SOLUTION_678_HPP