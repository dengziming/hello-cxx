//
// Created by ByteDance on 2024/3/17.
//

#include "leetcode.h"
#include "gtest/gtest.h"


TEST(Leetcode0003Test, Empty) {
    Solution solution;

    ASSERT_EQ(6, solution.lengthOfLongestSubstring("123456"));
    ASSERT_EQ(2, solution.lengthOfLongestSubstring("12"));
    ASSERT_EQ(2, solution.lengthOfLongestSubstring("12121"));
    ASSERT_EQ(4, solution.lengthOfLongestSubstring("abcdabcda"));
    ASSERT_EQ(4, solution.lengthOfLongestSubstring("abcabcd"));
}
