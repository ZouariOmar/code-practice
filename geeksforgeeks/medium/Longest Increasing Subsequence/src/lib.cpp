/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-03
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1 GFG @endlink
 * @link https://cp-algorithms.com/sequences/longest_increasing_subsequence.html LIS @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the length of the Longest Strictly Increasing Subsequence (LIS).
 *
 * @class     Solution
 * @param a   {std::vector<int> &}
 * @return    int
 */
int Solution::lis(std::vector<int> &a) {
  int n = a.size();
  const int INF = 1e9;
  std::vector<int> d(n + 1, INF);
  d[0] = -INF;

  for (int i = 0; i < n; i++) {
    int l = std::upper_bound(d.begin(), d.end(), a[i]) - d.begin();
    if (d[l - 1] < a[i] && a[i] < d[l])
      d[l] = a[i];
  }

  int ans = 0;
  for (int l = 0; l <= n; l++)
    if (d[l] < INF)
      ans = l;

  return ans;
}