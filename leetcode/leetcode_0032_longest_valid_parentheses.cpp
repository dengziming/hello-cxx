//
// Created by ByteDance on 2024/3/20.
//

#include "leetcode.h"
using namespace std;

// s[i] 结尾的最长串，等于以 s[i-1] 结尾的子串，加上一个 2
int Solution::longestValidParentheses(std::string s) {
    if (s.length() < 2) {
        return 0;
    }
    int valid[s.size()];
    valid[0]=0; // C++ 小白: 这里必须赋值？不然会变成一些奇怪的数

    for (int right = 1; right < s.length(); ++right) {
        if (s[right] == '(') {
            valid[right] = 0; // C++ 小白: 这里必须赋值？不然会变成一些奇怪的数
            continue;
        }
        int childLength = valid[right-1];
        int left = right - childLength - 1;
        if (left == -1 || s[left] == ')') {
            valid[right] = 0; // C++ 小白: 这里必须赋值？不然会变成一些奇怪的数
            continue;
        }
        if (left == 0) {
            valid[right] = valid[right-1] + 2;
        } else {
            valid[right] = valid[right-1] + 2 + valid[left-1];
        }
    }
    int max = 0;
    for (const auto &item: valid) {
        if (item > max) {
            max = item;
        }
    }
    return max;
}