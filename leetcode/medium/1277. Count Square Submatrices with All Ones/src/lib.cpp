/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-27
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/count-square-submatrices-with-all-ones leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return how many square subMatrices have all ones.
 * @param matrix vector<vector<int>> &
 * @return int
 */
int Solution::countSquares(vector<vector<int>> &matrix) {
  size_t m{matrix.size()}, n{matrix[0].size()};   // Given a m * n matrix
  vector<vector<int>> arr(n, vector<int>(m, 0));  // Tracker table
  int ans{};                                      // The result answer

  // Init first column of tracker table
  for (size_t i{}; i < n; i++) {
    arr[i][0] = matrix[i][0];
    ans += matrix[i][0];  // Add the count of squares from the first column
  }

  // Init first row of tracker table
  for (size_t i{1}; i < m; i++) {
    arr[0][i] = matrix[0][i];
    ans += matrix[0][i];  // Add the count of squares from the first row
  }

  // Fill the DP table for remaining cells
  for (size_t i{1}; i < n; ++i)
    for (size_t j{1}; j < m; ++j) {
      if (matrix[i][j])
        arr[i][j] = 1 + min(arr[i][j - 1], arr[i - 1][j], arr[i - 1][j - 1]);
      ans += arr[i][j];  // Add current cell's value to total count
    }

  return ans;  // Return total count of squares
}