//
// Created by ByteDance on 2024/2/7.
//

#include "leetcode.h"
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hashtable;
    for (int i = 0; i < nums.size(); ++i) {
        auto it = hashtable.find(target - nums[i]);
        if (it != hashtable.end()) {
            return {it->second, i};
        }
        hashtable[nums[i]] = i;
    }
    return {};
}

std::vector<int> Solution::twoSum(std::vector<int> &nums, int target) {
    return twoSum(nums, target);
}
