/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-13
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/largest-product/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the maximum product of k contiguous elements in the array.
 * @param arr {vector<int> &}
 * @param k int
 * @return int
 */
int Solution::findMaxProduct(vector<int> &arr, int k) {
  int Max{};
  size_t len{arr.size()};
  for (int i{}; i < len; i++) {
    int j = i, multi = 1, c = 0;
    while (j < len && c < k) {
      multi *= arr[j++];
      c++;
    }
    if (c == k)
      Max = max(Max, multi);
  }
  return Max;
}