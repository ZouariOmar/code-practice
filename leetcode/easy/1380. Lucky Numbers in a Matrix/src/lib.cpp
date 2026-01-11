/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/lucky-numbers-in-a-matrix
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order. 
 * *
 * A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.
 * *
 * @param matrix
 * @return vector<int>
 */
vector<int> Solution::luckyNumbers(vector<vector<int>>& matrix) {
  if (matrix.size() == 0)
    return {};

  if (matrix.size() == 1) {
    vector<int> res(1, matrix[0][0]);
    vector<int>::iterator it = matrix[0].begin() + 1;

    for (; it != matrix[0].end(); it++)
      res[0] = min(res[0], *it);

    return res;
  }

  vector<int> res;

  for (int i = 0; i < matrix.size(); i++) {
    int minRow = matrix[i][0];
    int minJ = 0;
    for (int j = 1; j < matrix[i].size(); j++) {
      if (minRow > matrix[i][j]) {
        minRow = matrix[i][j];
        minJ = j;
      }
    }

    bool isLucky = true;
    for (int k = 0; k < matrix.size(); k++) {
      if (matrix[k][minJ] > matrix[i][minJ]) {
        isLucky = false;
        break;
      }
    }

    if (isLucky)
      res.push_back(matrix[i][minJ]);
  }

  return res;
}
