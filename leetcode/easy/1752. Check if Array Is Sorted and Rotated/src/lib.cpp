/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-02
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/check-if-array-is-sorted-and-rotated leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
 *
 * @param arr {vector<int> &}
 * @return bool
 */
bool Solution::check(vector<int> &arr) {
  int count{}, n = arr.size();
  for (int i{}; i < n; i++)
    if (arr[i] > arr[(i + 1) % n] && ++count > 1)
      return false;
  return true;
}