/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-01
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/solving-questions-with-brainpower leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn               Solution::mostPoints(std::vector<std::vector<int>> &)
 * @brief            Return the maximum points you can earn for the exam
 * @param  questions {std::vector<std::vector<int>> &}
 * @return           long long
 */
long long Solution::mostPoints(std::vector<std::vector<int>> &questions) {
  int n = questions.size();
  std::vector<long long> dp(n + 1, 0);

  for (int i = n - 1; i >= 0; --i) {
    long long solve = questions[i][0];
    int next = i + questions[i][1] + 1;
    if (next < n)
      solve += dp[next];
    dp[i] = std::max(solve, dp[i + 1]);
  }

  return dp[0];
}