#include <gtest/gtest.h>

#include "solutions/solution_674.hpp"

TEST(Solutions, Test674) {
    const std::vector<int> apples = {2, 1, 2, 3, 3, 1, 3, 5};
    EXPECT_EQ(longestDistanceWithTwoTypes(apples), 4);
}