//
// Created by ByteDance on 2024/2/7.
//

#include "gtest/gtest.h"
#include "leetcode.h"

TEST(Leetcode00001Test, Empty) {
  std::vector<int> data = {1,2,3,4};
  std::vector<int> result = {2,3};
  ASSERT_EQ(result, twoSum(data, 7));
}
