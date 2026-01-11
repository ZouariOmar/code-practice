/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-13
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the minimum number of operations needed so that all elements of the array are greater than or equal to k.
 *
 * @param a {vector<int> &}
 * @param k int
 * @return int
 */
int Solution::minOperations(vector<int> &a, int k) {
  sort(a.begin(), a.end());
  for (int i = 0, j = 0, count = 0, x, y;; ++count) {
    if (i < a.size() && (j >= count || a[i] <= a[j]))
      x = a[i++];
    else
      x = a[j++];
    if (x >= k)
      return count;
    if (i < a.size() && (j >= count || a[i] <= a[j]))
      y = a[i++];
    else
      y = a[j++];
    long t = 2L * x + y;
    a[count] = t < k ? (int)t : k;
  }
  return -1;
}