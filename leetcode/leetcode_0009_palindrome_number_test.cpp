//
// Created by ByteDance on 2024/3/17.
//


#include "gtest/gtest.h"
#include "leetcode.h"

TEST(Leetcode0009Test, Empty) {
    Solution solution;

    assert(solution.isPalindrome(121));
    assert(!solution.isPalindrome(123));
}
