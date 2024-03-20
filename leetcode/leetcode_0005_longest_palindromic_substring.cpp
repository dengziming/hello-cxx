//
// Created by ByteDance on 2024/3/18.
//

#include "leetcode.h"
#include <string>
#include <vector>

using namespace std;

// 可以计算以 s[i] 结尾的最长回文串 f(i), 需要先计算s[i:j] 是否是回文串
// s[2:i] 是回文串，name s[3:i-1] 一定是回文串
// f(i) 要么是 f(i-1)+2, 要么是
std::string Solution::longestPalindrome(std::string s) {
    if (s.length() < 2) {
        return s;
    }

    std::string palindrome[s.length()];

    // C++ 小白: 这里必须初始化，等下在 for 循环的时候初始化 `flag[i] = vector<bool>(s.length)` 会不符合预期？
    std::vector<std::vector<bool>> palindromeFlag(s.length(), vector<bool>(s.length()));

    for (int right = 0; right < s.length(); ++right) {
        palindromeFlag[right][right] = true;
        palindrome[right] = s[right];
        if (right > 0) {
            palindromeFlag[right-1][right] = s[right]==s[right-1];
            if (palindromeFlag[right-1][right]) {
                palindrome[right] = s.substr(right -1, 2);
            }
        }

        for (int left = right-2; left >= 0; --left) {
            palindromeFlag[left][right] = (s[left] == s[right]) && palindromeFlag[left+1][right-1];
            if (palindromeFlag[left][right] && right-left+1 > palindrome[right].length()) {
                palindrome[right] = s.substr(left,right-left+1);
            }
        }
    }
    std::string max;
    for (const auto &item: palindrome) {
        if (item.length() > max.length()) {
            max = item;
        }
    }
    return max;
}
