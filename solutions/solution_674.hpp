#ifndef SOLUTION_SOLUTION_674_HPP
#define SOLUTION_SOLUTION_674_HPP

#include <vector>
#include <unordered_map>
#include <climits>
#include <cmath>

int findLongestDistancePortion(const std::vector<int> &types) {
    int res = 0, left = 0, right = 0;
    std::pair<int, int> bag1, bag2;
    while (right < types.size()) {
        if (bag1.first == types[right]) {
            ++bag1.second;
            ++right;
        } else if (bag2.first == types[right]) {
            ++bag2.second;
            ++right;
        } else {
            if (bag1.second == 0) {
                bag1.first = types[right];
                bag1.second = 1;
                ++right;
            } else if (bag2.second == 0) {
                bag2.first = types[right];
                bag2.second = 1;
                ++right;
            } else {
                if (bag1.first == types[left]) {
                    --bag1.second;
                    ++left;
                } else {
                    --bag2.second;
                    ++left;
                }
            }
        }
    
        res = std::max(res, bag1.second + bag2.second);
    }

    return res;
}

#endif // SOLUTION_SOLUTION_674_HPP