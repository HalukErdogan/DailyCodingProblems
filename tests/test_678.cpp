#include <gtest/gtest.h>

#include "solutions/solution_678.hpp"

TEST(Solutions, Test678) {
    EXPECT_EQ(nextPermutation(48975), 49578);
}