/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-21
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/grid-game leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the number of points collected by the second robot.
 *
 * @param grid {vector<vector<int>> &}
 * @return {long long}
 */
long long Solution::gridGame(vector<vector<int>> &grid) {
  long long top{};
  size_t n{grid[0].size()};
  for (int i{}; i < n; i++)
    top += grid[0][i];

  long long bottom{}, res{LLONG_MAX};
  for (int i{}; i < n; i++) {
    top -= grid[0][i];                // First robot picks from the top row
    res = min(res, max(top, bottom)); // Minimize the maximum score for the second robot
    bottom += grid[1][i];             // Second robot picks from the bottom row 🤖
  }
  return res;
}