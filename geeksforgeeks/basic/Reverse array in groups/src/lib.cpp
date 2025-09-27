/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-08
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1?page=2&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Reverse every sub-array group of size k.
 *
 * @param arr std::vector<int> &
 * @param k   int
 */
void Solution::reverseInGroups(std::vector<int> &arr, int k) {
  int len = arr.size();
  for (int i{}; i < len; i += k) {
    int l = i,
        r = std::min(i + k, len);
    std::reverse(arr.begin() + l, arr.begin() + r);
  }
}