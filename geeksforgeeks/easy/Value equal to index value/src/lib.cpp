/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-23
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).
 * @param arr vector<int> &
 * @return vector<int>
 */
vector<int> Solution::valueEqualToIndex(vector<int> &arr) {
  vector<int> res;         // Declare the result var
  size_t len{arr.size()};  // Store the size of the `arr` vector

  for (size_t i{}; i < len; ++i)  // if arr[i] == i + 1 ==> store `arr[i]` in `res`
    if (arr[i] == i + 1) res.push_back(arr[i]);

  return res;
}