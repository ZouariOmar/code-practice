/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-28
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-number-of-fish-in-a-grid leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum number of fish the fisher can catch if he chooses his starting cell optimally, or 0 if no water cell exists.
 *
 * @param grid {vector<vector<int>> &}
 * @return int
 */
int Solution::findMaxFish(vector<vector<int>> &grid) {
  int Max{};
  for (int i{}; i < grid.size(); i++) {
    for (int j{}; j < grid[0].size(); j++) {
      if (grid[i][j] == 0)
        continue;
      int C{};
      queue<pair<int, int>> T;
      T.push({i, j});
      while (!T.empty()) {
        auto [x, y] = T.front();
        T.pop();
        if (grid[x][y] > 0) {
          C += grid[x][y];
          grid[x][y] = 0; // Mark as visited
          if (x > 0 && grid[x - 1][y] > 0)
            T.push({x - 1, y});
          if (x + 1 < grid.size() && grid[x + 1][y] > 0)
            T.push({x + 1, y});
          if (y > 0 && grid[x][y - 1] > 0)
            T.push({x, y - 1});
          if (y + 1 < grid[0].size() && grid[x][y + 1] > 0)
            T.push({x, y + 1});
        }
        Max = max(Max, C);
      }
    }
  }
  return Max;
}