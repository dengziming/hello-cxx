//
// Created by ByteDance on 2024/3/29.
//

#include "leetcode.h"

// This is similar to ladders problem.
int Solution::coinChange(vector<int>& coins, int amount) {
    if (amount == 0)
        return 0;
    if (coins.empty())
        return -1;
    vector<int> dp(amount+1);
    dp[0]=0;

    // dp[i] = min for(k)( dp[i-k] )
    for (int value = 1; value <= amount; ++value) {
        dp[value] = -1;
        for (int coin : coins) {
            if (value-coin >=0 && dp[value-coin] != -1) {
                if (dp[value] == -1) {
                    dp[value] = dp[value-coin] + 1;
                } else {
                    dp[value] = min(dp[value-coin] + 1, dp[value]);
                }
            }
        }
    }
    return dp[amount];
}
