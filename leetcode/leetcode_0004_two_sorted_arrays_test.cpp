//
// Created by ByteDance on 2024/3/22.
//

#include "leetcode.h"
#include "iostream"

#include "gtest/gtest.h"

TEST(Leetcode0004Test, Empty) {
    Solution solution;

    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3};
    ASSERT_EQ(2, solution.findMedianSortedArrays(nums1, nums2));
}

TEST(Leetcode0004Test, Empty2) {
    Solution solution;

    vector<int> nums1 = {3, 4};
    vector<int> nums2 = {1, 2};
    ASSERT_EQ(2.5, solution.findMedianSortedArrays(nums1, nums2));
}


TEST(Leetcode0004Test, Empty3) {
    Solution solution;

    vector<int> nums1 = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22};
    vector<int> nums2 = {0,6};
    ASSERT_EQ(10.5, solution.findMedianSortedArrays(nums1, nums2));
}
