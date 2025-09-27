/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-08
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=1&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Function to check if b is a subset of a
 *
 * @param a {vector<int> &}
 * @param b {vector<int> &}
 * @return bool
 */
bool Solution::isSubset(vector<int> &a, vector<int> &b) {
  sort(a.begin(), a.end()), sort(b.begin(), b.end());
  int i{}, j{}, c{}, bLen = b.size(), aLen = a.size();
  while (i < aLen && j < bLen) {
    if (a[i] == b[j])
      i++, j++, c++;
    else
      i++;
  }
  return c == bLen;
}