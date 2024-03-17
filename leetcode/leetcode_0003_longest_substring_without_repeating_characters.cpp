//
// Created by ByteDance on 2024/3/17.
//

#include "leetcode.h"
#include <unordered_map>

int Solution::lengthOfLongestSubstring(std::string s) {
    if (s.size() <= 1) {
        return s.size();
    }

    // The longest string that end with s[i]
    int longest[s.size()];
    std::unordered_map<char, int> chars;

    longest[0] = 1;
    chars[s[0]] = 1;

    int left = 0;
    for (int right = 1; right < s.size(); ++right) {
        char c = s[right];
        while (chars[c] == 1) {
            chars[s[left]] = 0;
            left++;
        }
        chars[s[right]] = 1;
        longest[right]= right - left + 1;
    }
    int maxL = 1;
    for (const auto &item: longest) {
        if (item > maxL) {
            maxL = item;
        }
    }
    return maxL;
}
