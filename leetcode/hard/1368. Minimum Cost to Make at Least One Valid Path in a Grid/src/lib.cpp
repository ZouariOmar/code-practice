/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-18
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the minimum cost to make the grid have at least one valid path.
 *
 * @param grid {vector<vector<int>> &}
 * @return int
 */
int Solution::minCost(vector<vector<int>> &grid) {
  int r = grid.size(),    // Number of rows
      c = grid[0].size(); // Number of columns
  vector<vector<int>> dist(r, vector<int>(c, INT_MAX));
  deque<pair<int, int>> dq;
  dq.emplace_front(0, 0);
  dist[0][0] = 0;

  while (!dq.empty()) {
    auto [x, y] = dq.front();
    dq.pop_front();
    for (int i{}; i < 4; ++i) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
        int cost = (i + 1 == grid[x][y]) ? 0 : 1;
        if (dist[x][y] + cost < dist[nx][ny]) {
          dist[nx][ny] = dist[x][y] + cost;
          (cost == 0) ? dq.emplace_front(nx, ny) : dq.emplace_back(nx, ny);
        }
      }
    }
  }

  return dist[r - 1][c - 1];
}