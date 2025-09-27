/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-29
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/longest-increasing-subarray3811/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the length of longest increasing subarray
 *
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::lenOfLongIncSubArr(vector<int> &arr) {
  int max_sub{1}, max_sub_tmp{1};
  for (int i{}, len = arr.size(); i < len - 1; i++) {
    if (arr[i] < arr[i + 1])
      max_sub_tmp++;
    else
      max_sub = max(max_sub, max_sub_tmp), max_sub_tmp = 1;
  }
  return max(max_sub, max_sub_tmp);
}