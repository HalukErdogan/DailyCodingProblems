#ifndef SOLUTION_SOLUTION_670_HPP
#define SOLUTION_SOLUTION_670_HPP

#include <vector>
#include <climits>
#include <cmath>

int minNumSquares(int n) {
    std::vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    for(int i=1; i<=n; ++i) {
        for(int j=1; j*j<=i; ++j) {
            dp[i] = std::min(dp[i], dp[i-j*j] + 1);
        }
    }
    return dp[n];        
}

#endif // SOLUTION_SOLUTION_670_HPP