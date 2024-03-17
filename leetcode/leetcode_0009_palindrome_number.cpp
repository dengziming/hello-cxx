//
// Created by ByteDance on 2024/3/17.
//

#include "leetcode.h"

bool Solution::isPalindrome(int x) {
    int n = x;
     if (x < 0) {
         return false;
     }

     int num = 0;
     while (x) {
         num = num * 10;
         num += x%10;
         x = x/10;
     }

     if (num == n) {
         return true;
     }
    return false;
}