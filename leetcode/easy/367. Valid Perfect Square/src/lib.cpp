/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-30
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/valid-perfect-square leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if num is a perfect square or false otherwise.
 *
 * @param num int
 * @return bool
 */
bool Solution::isPerfectSquare(int num) {
  long x1 = num, x2 = 1L;
  while (x1 > x2)
    x1 = (x1 + x2) / 2L, x2 = num / x1;
  return x1 == x2 && num % x1 == 0L;
}