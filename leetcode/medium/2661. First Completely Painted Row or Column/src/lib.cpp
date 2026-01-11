/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-20
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/first-completely-painted-row-or-column leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the smallest index i at which either a row or a column will be completely painted in mat
 *
 * @param arr {vector<int> &}
 * @param mat {vector<vector<int>> &}
 * @return int
 */
int Solution::firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat) {
  size_t rows{mat.size()}, cols{mat[0].size()}, len{arr.size()};
  unordered_map<int, pair<int, int>> positionMap;
  vector<int> rowCount(rows, cols), colCount(cols, rows);

  for (size_t r{}; r < rows; ++r)
    for (size_t c{}; c < cols; ++c)
      positionMap[mat[r][c]] = {r, c};

  for (size_t i{}; i < len; ++i) {
    int val = arr[i];
    auto [row, col] = positionMap[val];
    if (--rowCount[row] == 0 || --colCount[col] == 0)
      return i;
  }

  return -1;
}