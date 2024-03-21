//
// Created by ByteDance on 2024/3/21.
//

#include "leetcode.h"
#include <unordered_set>

void backtrack(vector<vector<int>> & result, unordered_set<int> & used, vector<int> current, vector<int>& nums) {
    if (used.size() == nums.size()) {
        result.push_back(current);
    }
    for (const auto &item: nums) {
        if (used.find(item) == used.end()) {
            current.push_back(item);
            used.insert(item);
            backtrack(result, used, current, nums);
            used.erase(item);
            current.pop_back();
        }
    }
}

vector<vector<int>> Solution::permute(vector<int>& nums) {
    vector<vector<int>> result;
    unordered_set<int> unused;
    backtrack(result, unused, vector<int>(), nums);
    return result;
}
