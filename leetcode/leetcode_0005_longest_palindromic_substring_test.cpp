//
// Created by ByteDance on 2024/3/18.
//

#include "leetcode.h"
#include <string>
#include "gtest/gtest.h"

TEST(Leetcode0005Test, Empty) {
    Solution solution;

    ASSERT_EQ("bab", solution.longestPalindrome("babad"));
    ASSERT_EQ("bb", solution.longestPalindrome("cbbd"));
}
