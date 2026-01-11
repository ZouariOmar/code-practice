/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-19
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/trapping-rain-water-ii leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief Return the volume of water it can trap after raining.
 *
 * @param arr {vector<vector<int>> &}
 * @return int
 */
int Solution::trapRainWater(vector<vector<int>> &arr) {
  size_t m = arr.size(),
         n = arr[0].size();
  if (n < 3 || m < 3)
    return 0; // Too few columns to trap water or Too few rows to trap water.

  // Min-heap to track the boundary cells.
  priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
  vector<vector<bool>> visited(m, vector<bool>(n, false));

  // Push all boundary cells into the heap.
  for (size_t i = 0; i < m; ++i)
    for (size_t j = 0; j < n; ++j)
      if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
        pq.emplace(arr[i][j], i, j), visited[i][j] = true;

  int trappedWater = 0;
  vector<int> dx = {-1, 1, 0, 0};
  vector<int> dy = {0, 0, -1, 1};

  // Process cells in the heap.
  while (!pq.empty()) {
    auto [height, x, y] = pq.top();
    pq.pop();

    // Check all 4 directions.
    for (int d = 0; d < 4; ++d) {
      int nx = x + dx[d];
      int ny = y + dy[d];

      if (nx >= 0 && ny >= 0 && nx < m && ny < n && !visited[nx][ny]) {
        visited[nx][ny] = true;

        // If current cell traps water, add the trapped volume.
        trappedWater += max(0, height - arr[nx][ny]);

        // Push the maximum height between the current and new cell into the heap.
        pq.emplace(max(height, arr[nx][ny]), nx, ny);
      }
    }
  }

  return trappedWater;
}
