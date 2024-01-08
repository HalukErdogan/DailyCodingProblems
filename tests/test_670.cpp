#include <gtest/gtest.h>

#include "solutions/solution_670.hpp"

TEST(Solutions, Test670) {
    Solution sol;

    EXPECT_EQ(sol.minNumSquares(13), 2);
    EXPECT_EQ(sol.minNumSquares(27), 3);
}