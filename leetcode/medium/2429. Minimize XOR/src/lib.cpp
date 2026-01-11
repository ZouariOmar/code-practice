/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-15
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimize-xor leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the integer `x`. The test cases are generated such that x is uniquely determined.
 * *
 * *
 * - x has the same number of set bits as num2
 * *
 * - The value x XOR num1 is minimal.
 * @param num1 {const unsigned int &}
 * @param num2 {const unsigned int &}
 * @return int
 */
int Solution::minimizeXor(const unsigned int &num1, const unsigned int &num2) {
  int a = __builtin_popcount(num1),
      b = __builtin_popcount(num2),
      res = num1;
  for (int i{}; i < 32; ++i) {
    if (a > b && (1 << i) & num1)
      res ^= 1 << i, --a;
    if (a < b && !((1 << i) & num1))
      res ^= 1 << i, ++a;
  }
  return res;
} 