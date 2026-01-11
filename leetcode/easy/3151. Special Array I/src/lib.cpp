/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-01
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/special-array-i leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if `arr` is a special array, otherwise, return false.
 * @details An array is considered special if every pair of its adjacent elements contains two numbers with different parity.
 *
 * @param arr {vector<int> &}
 * @return bool
 */
bool Solution::isArraySpecial(vector<int> &arr) {
  size_t len{arr.size()}; // Length of vector `arr`
  for (int i{}; i < len - 1; ++i)
    if (arr[i] % 2 == arr[i + 1] % 2)
      return false;
  return true;
}