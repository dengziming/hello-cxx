//
// Created by ByteDance on 2024/4/1.
//

#include "leetcode.h"
#include "iostream"

int Solution::change(int amount, vector<int>& coins) {
    if (amount == 0)
        return 1;
    if (coins.empty())
        return 0;

    vector<int> dp(amount+1);

    // dp[i] = min for(k)( dp[i-k] )
    for (int coin : coins) {
        // we have one solution to add up to 0 with coins
        dp[0]=1;
        for (int value = coin; value <= amount; ++value) {
            dp[value] += dp[value-coin];
        }

    }

    return dp[amount];
}