//
// Created by ByteDance on 2024/3/22.
//

#include "leetcode.h"
#include "iostream"

using namespace std;

// a b c d
// 1 2 3 4 5 6
// left1, left2, index 从 0 开始
double find(vector<int>& nums1, vector<int>& nums2, int left1, int left2, int index) {
    std::cout << left1 << " " << left2 << " " << index << std::endl;
    // 递归机
    if (left1 == nums1.size()) {
        return nums2[index+left2];
    }
    if (left2 == nums2.size()) {
        return nums1[index+left1];
    }
    if (index == 0) {
        return min(nums1[left1], nums2[left2]);
    }
    // 计算应该从 nums1 拿多少个数
    int cnt1 = index/2+1;
    if (cnt1+left1 > nums1.size()) {
        cnt1 = nums1.size() - left1;
    }
    int cnt2 = index+1-cnt1;
    if (cnt2+left2 > nums2.size()) {
        cnt2 = nums2.size() - left2;
    }

    int idx1 = cnt1 - 1 + left1;
    int idx2 = cnt2 - 1 + left2;

    // 如果 nums1 最大的数都不大于 nums2[mid]，那么 nums1 所有的数都不大于 nums[mid]
    if (nums1[idx1] <= nums2[idx2]) {
        return find(nums1, nums2, idx1+1, left2, index-cnt1);
    } else {
        return find(nums1, nums2, left1, idx2+1, index-cnt2);
    }
}

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    if ((nums2.size() + nums1.size())%2 == 1) {
        std::cout << std::endl;
        return find(nums1, nums2, 0, 0, (nums2.size() + nums1.size())/2);
    } else {
        std::cout << std::endl;
        int left = find(nums1, nums2, 0, 0, (nums2.size() + nums1.size())/2);
        std::cout << std::endl;
        int right = find(nums1, nums2, 0, 0, (nums2.size() + nums1.size())/2-1);
        return (left+right)/2.0;
    }
}
