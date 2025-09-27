/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-04
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/index-of-first-1-in-a-sorted-array-of-0s-and-1s4048/1?page=2&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the index (0-based indexing) of the first 1 in the given array.
 *
 * @class     Solution
 * @param arr {std::vector<int> &}
 * @return    int
 */
int Solution::firstIndex(std::vector<int> &arr) {
  int ans = -1, n = arr.size(),
      low = 0, high = n - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == 1)
      ans = mid, high = mid - 1;
    else
      low = mid + 1;
  }
  return ans;
}