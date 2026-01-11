/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-16
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/bitwise-xor-of-all-pairings leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the bitwise XOR of all integers in `nums3`.
 *
 * @param nums1 {vector<int> &}
 * @param nums2 {vector<int> &}
 * @return int
 */
int Solution::xorAllNums(vector<int> &nums1, vector<int> &nums2) {
  int c1 = nums1.size(), c2 = nums2.size(),
      x1{}, x2{};

  if (c1 & 1)
    for (const int &num : nums2)
      x2 ^= num;

  if (c2 & 1)
    for (const int &num : nums1)
      x1 ^= num;

return x1 ^ x2;
}