//
// Created by ByteDance on 2024/3/19.
//

#include "leetcode.h"
#include <string>
#include "gtest/gtest.h"

using namespace std;

TEST(Leetcode0006Test, Empty) {
    Solution solution;

    ASSERT_EQ("PAHNAPLSIIGYIR", solution.convert("PAYPALISHIRING", 3));
    ASSERT_EQ("PINALSIGYAHRPI", solution.convert("PAYPALISHIRING", 4));
    ASSERT_EQ("A", solution.convert("A", 1));
}