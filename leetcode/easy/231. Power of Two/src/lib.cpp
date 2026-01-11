/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-11
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/power-of-two leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given an integer n, return true if it is a power of two. Otherwise, return false.
 * @param n int
 * @return true | false
 */
bool Solution::isPowerOfTwo(int n) {
  // A power of two in binary has only one bit set (e.g., 1, 2, 4, 8 -> 0001, 0010, 0100, 1000)
  // So `n & (n - 1)` will be 0 only if `n` is a power of two.
  return n > 0 && !(n & (n - 1));
}