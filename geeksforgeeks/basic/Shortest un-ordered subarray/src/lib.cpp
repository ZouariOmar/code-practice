/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-17
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/shortest-un-ordered-subarray3634/1?page=2&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the length of the shortest unordered (neither increasing nor decreasing) subarray in the given array. If there is no subarray then return 0.
 *
 * @param arr std::vector<int> &
 * @return    int
 */
int Solution::shortestUnorderedSubarray(std::vector<int> &arr) {
  for (size_t i{1}, len{arr.size()}; i < len - 1; i++)
    if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
      return 3;
  return 0;
}