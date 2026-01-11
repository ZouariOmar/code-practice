/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-05
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/contains-duplicate-ii leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return`true` if there are two distinct indices `i` and `j` in the array such that `nums[i] == nums[j]` and `abs(i - j) <= k`.
 * @param arr vector<int> &
 * @param k int
 * @return true or false
 */
bool Solution::containsNearbyDuplicate(vector<int> &arr, int k) {
  unordered_map<int, int> ump;
  size_t len{arr.size()};  // Sizeof `arr`

  for (size_t i{}; i < len; i++) {
    int n{arr[i]};
    if (ump.find(n) != ump.end() && i - ump[n] <= k)
      return true;
    else
      ump[n] = i;
  }
  return false;
}