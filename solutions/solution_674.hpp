#ifndef SOLUTION_SOLUTION_674_HPP
#define SOLUTION_SOLUTION_674_HPP

#include <vector>
#include <unordered_map>

int longestDistanceWithTwoTypes(const std::vector<int> &apples) {
    std::unordered_map<int, int> count;
    int res = 0, left = 0, right = 0;
    for(; right < apples.size(); ++right) {
        ++count[apples[right]];
        while (count.size() > 2) {
            --count[apples[left]];
            if (count[apples[left]] == 0) {
                count.erase(apples[left]);
            }
            ++left;
        }
        res = std::max(res, right - left + 1);
    }

    return res;
}

#endif // SOLUTION_SOLUTION_674_HPP