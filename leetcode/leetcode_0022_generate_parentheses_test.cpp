//
// Created by ByteDance on 2024/3/27.
//

#include "leetcode.h"
#include "iostream"
# include "gtest/gtest.h"



TEST(Leetcode0022Test, Empty) {
    Solution solution;

    for (const auto &item: solution.generateParenthesis(3)) {
        cout << item << endl;
    }
    ASSERT_EQ(5, solution.generateParenthesis(3).size());
}
