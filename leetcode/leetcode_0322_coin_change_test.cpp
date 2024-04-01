//
// Created by ByteDance on 2024/3/29.
//

#include "leetcode.h"

#include "gtest/gtest.h"

TEST(Leetcode0322Test, Empty) {
    Solution solution;
    vector<int> v = {1,2,5};
    ASSERT_EQ(3, solution.coinChange(v, 11));
}
