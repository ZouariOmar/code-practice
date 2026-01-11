/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-23
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-servers-that-communicate leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Count Servers that Communicate
 *
 * @param grid {vector<vector<int>> &}
 * @return int
 */
int Solution::countServers(vector<vector<int>> &grid) {
  int m = grid.size(), n = grid[0].size();
  vector<int> r(m, 0), c(n, 0);

  for (int i{}; i < m; ++i)
    for (int j{}; j < n; ++j)
      r[i] += grid[i][j], c[j] += grid[i][j];

  int ans{};
  for (int i{}; i < m; i++)
    for (int j{}; j < n; j++)
      if (grid[i][j] == 1 && (r[i] > 1 || c[j] > 1))
        ans++;

  return ans;
}
