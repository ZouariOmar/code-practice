/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-30
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/count-ways-to-build-good-strings leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part
const int MOD = 1e9 + 7;

/**
 * @brief ### Return the number of different good strings that can be constructed satisfying these properties. Since the answer can be large, return it modulo 10^9 + 7.
 * @param low int
 * @param high int
 * @param zero int
 * @param one int
 * @return int
 */
int Solution::countGoodStrings(int low, int high, int zero, int one) {
  vector<int> dp(high + 1, 0);
  dp[0] = 1;

  for (int length = 1; length <= high; ++length) {
    if (length >= zero)
      dp[length] = (dp[length] + dp[length - zero]) % MOD;
    if (length >= one)
      dp[length] = (dp[length] + dp[length - one]) % MOD;
  }

  for (int &it : dp)
    cout << it << " ";
  cout << endl;

  int result{};
  for (int length = low; length <= high; ++length)
    result = (result + dp[length]) % MOD;

  return result;
}


