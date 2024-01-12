#include <gtest/gtest.h>

#include "solutions/solution_670.hpp"

TEST(Solutions, Test670) {
    EXPECT_EQ(minNumSquares(13), 2);
    EXPECT_EQ(minNumSquares(27), 3);
}