/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-17
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/divide-array-into-equal-pairs leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return `true` if nums can be divided into n pairs, otherwise return `false`.
 *
 * @param arr {std::vector<int> &}
 * @return    bool
 */
bool Solution::divideArray(std::vector<int> &arr) {
  sort(arr.begin(), arr.end());
  for (size_t i{}, len{arr.size()}; i < len; i += 2)
    if (arr[i] != arr[i + 1])
      return false;
  return true;
}