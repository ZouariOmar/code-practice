/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-26
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/move-zeroes leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 * ! Note that you must do this in-place without making a copy of the array.
 * @param arr {vector<int> &}
 */
void Solution::moveZeroes(vector<int> &arr) {
  size_t left{}, len{arr.size()};
  for (size_t right{}; right < len; right++)
    if (arr[right])
      swap(arr[right], arr[left++]);
}