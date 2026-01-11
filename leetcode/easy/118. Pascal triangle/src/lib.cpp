/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-06
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/pascals-triangle leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given an integer numRows, return the first numRows of Pascal's triangle
 * @param n {int} Number of rows
 * @return vector<vector<int>>
 */
vector<vector<int>> Solution::generate(int n) {
  vector<vector<int>> result;
  for (size_t i{}; i < n; i++) {
    vector<int> row(i + 1, 1);
    for (size_t j{1}; j < i; j++)
      row[j] = result[i - 1][j - 1] + result[i - 1][j];
    result.push_back(row);
  }
  return result;
}