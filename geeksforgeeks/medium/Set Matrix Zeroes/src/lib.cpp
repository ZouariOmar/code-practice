/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-25
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/set-matrix-zeroes/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Modify the matrix such that if mat[i][j] is 0, all the elements in the i-th row and j-th column are set to 0 and do it in constant space complexity.
 * @param mat {vector<vector<int>> &}
 */
void Solution::setMatrixZeroes(vector<vector<int>> &mat) {
  size_t rowLength = mat.size(), colLength = mat[0].size();

  // Use a single flag to track if the first row and first column should be zeroed
  bool firstRowZero{}, firstColZero{};

  // Check if the first row has any zero
  for (int j = 0; j < colLength; j++)
    if (mat[0][j] == 0) {
      firstRowZero = true;
      break;
    }

  // Check if the first column has any zero
  for (int i = 0; i < rowLength; i++)
    if (mat[i][0] == 0) {
      firstColZero = true;
      break;
    }

  // Mark zeroes in the rest of the matrix
  for (int i = 1; i < rowLength; i++)
    for (int j = 1; j < colLength; j++)
      if (mat[i][j] == 0) {
        mat[i][0] = 0; // Mark the first column for the row
        mat[0][j] = 0; // Mark the first row for the column
      }

  // Set the zeroes for the inner matrix
  for (int i = 1; i < rowLength; i++)
    for (int j = 1; j < colLength; j++)
      if (mat[i][0] == 0 || mat[0][j] == 0)
        mat[i][j] = 0;

  // Set zeroes for the first row and first column
  if (firstRowZero)
    for (int j = 0; j < colLength; j++)
      mat[0][j] = 0;

  if (firstColZero)
    for (int i = 0; i < rowLength; i++)
      mat[i][0] = 0;
}
