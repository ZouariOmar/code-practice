/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-21
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/missing-number leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the only number in the range that is missing from the array
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::missingNumber(vector<int> &arr) {
  int len = arr.size() * (arr.size() + 1) / 2;
  for (int &it : arr)
    len -= it;
  return len;
}