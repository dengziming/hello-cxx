//
// Created by ByteDance on 2024/2/7.
//

#ifndef HELLO_CXX_LEETCODE_H
#define HELLO_CXX_LEETCODE_H

#endif //HELLO_CXX_LEETCODE_H

#include <vector>
#include <string>


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
  public:
    //
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    // https://leetcode.cn/problems/cousins-in-binary-tree-ii/
    TreeNode* replaceValueInTree(TreeNode* root);

    // https://leetcode.com/problems/palindrome-number/
    bool isPalindrome(int x);

    int lengthOfLongestSubstring(std::string s);

    // https://leetcode.com/problems/longest-palindromic-substring/
    std::string longestPalindrome(std::string s);
};

std::vector<int> twoSum(std::vector<int>& nums, int target);
