/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief #### Find any matrix of non-negative integers of size rowSum.length x colSum.length that satisfies the rowSum and colSum requirements.
 *
 * @param rowSum
 * @param colSum
 * @return vector<vector<int>>
 */
vector<vector<int>> Solution::restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
  int numRows = rowSum.size();
  int numCols = colSum.size();

  std::vector<std::vector<int>> matrix(numRows, std::vector<int>(numCols, 0));

  for (int i = 0; i < numRows; ++i) {
    for (int j = 0; j < numCols; ++j) {
      int value = std::min(rowSum[i], colSum[j]);
      matrix[i][j] = value;
      rowSum[i] -= value;
      colSum[j] -= value;
    }
  }

  return matrix;
}