/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-04
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return `true` if it is possible to represent n as the sum of distinct powers of three. Otherwise, return `false`.
 *
 * @class   Solution
 * @param n int
 * @return  bool
 */
bool Solution::checkPowersOfThree(int n) {
  while (n > 0) {
    if (n % 3 == 2)
      return false;
    n /= 3; // Right shift ternary bits by 1 for the next digit
  }
  return true;
}