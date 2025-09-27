/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-06
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/max-odd-sum0651/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum possible odd sum. If no subsequence with an odd sum can be formed, return -1.
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::findMaxOddSum(vector<int> &arr) {
  int s{}, m(1e3);
  size_t len{arr.size()};
  while (len--) {
    if (arr[len] > 0) s += arr[len];
    if (arr[len] & 1) m = min(m, abs(arr[len]));
  }
  return s & 1 ? s : m != 1e3 ? s - m
                              : -1;
}