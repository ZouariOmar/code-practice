/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-06
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/ceil-in-a-sorted-array/1?page=1&sortBy=latest GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp" 

//? Function/Class prototype dev part

/**
 * @brief ### Find the index (0-based) of the smallest element in `arr[]` that is greater than or equal to `x`. This element is called the ceil of `x`. If such an element does not exist, return `-1`.
 *
 * @param arr {std::vector<int> &}
 * @param x   int
 * @return    int
 */
int Solution::findCeil(std::vector<int> &arr, int x) {
  for (size_t i{}, len{arr.size()}; i < len; ++i)
    if (arr[i] >= x)
      return i;
  return -1;
}