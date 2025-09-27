/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      03-09-2024
 * @link      https://www.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

int Solution::minOperations(string str1, string str2) {
  int n = str1.size(), m = str2.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1));

  for (int i = 0; i <= n; i++)
    dp[i][0] = i;

  for (int j = 1; j <= m; j++)
    dp[0][j] = j;

  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      if (str1[i - 1] == str2[j - 1])
        dp[i][j] = dp[i - 1][j - 1];
      else
        dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);

  return dp[n][m];
}