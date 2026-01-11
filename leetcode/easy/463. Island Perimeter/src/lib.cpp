/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-15
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/island-perimeter leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

int Solution::islandPerimeter(vector<vector<int>> &grid) {
  int result{};
  for (size_t i{}, rows(grid.size()); i < rows; i++)
    for (size_t j{}, cols(grid[i].size()); j < cols; j++) {
      if (!grid[i][j])
        continue;
      result += 4;
      if (i > 0 && grid[i - 1][j] == 1)
        result -= 2;
      if (j > 0 && grid[i][j - 1] == 1) {
        result -= 2;
      }
    }
  return result;
}