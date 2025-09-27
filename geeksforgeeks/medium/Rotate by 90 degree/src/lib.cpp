/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-05
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/rotate-by-90-degree0356/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Rotate it by 90 degrees in clockwise direction without using any extra space
 * @param mat vector<vector<int>> &
 */
void rotate(vector<vector<int>> &mat) {
  size_t n{mat.size()};  // Sizeof `mat`

  // Reverse Columns
  for (size_t i{}; i < n / 2; i++)
    for (size_t j{}; j < n; j++)
      swap(mat[i][j], mat[n - i - 1][j]);

  // Perform Transpose
  for (size_t i{}; i < n; i++)
    for (size_t j{i + 1}; j < n; j++)
      swap(mat[i][j], mat[j][i]);
}