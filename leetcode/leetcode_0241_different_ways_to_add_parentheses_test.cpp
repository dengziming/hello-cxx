//
// Created by ByteDance on 2024/3/27.
//


#include "gtest/gtest.h"
#include "leetcode.h"

TEST(Leetcode0241Test, Empty) {
    Solution solution;
    ASSERT_EQ(2, solution.diffWaysToCompute("2-1-1").size());
}
