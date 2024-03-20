//
// Created by ByteDance on 2024/3/20.
//

#include "gtest/gtest.h"
#include "leetcode.h"

TEST(Leetcode0032Test, Empty) {
    Solution solution;

    ASSERT_EQ(2, solution.longestValidParentheses("(()"));
}