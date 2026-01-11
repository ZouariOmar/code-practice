/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-19
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/ugly-number leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given an integer n, return true if n is an ugly number.
 * @details An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
 * @param n {int}
 * @return true | false
 */
bool Solution::isUgly(int n) {
  if (!n) return false;
  if (n > 0 && n <= 3) return true;
  if (n % 2 == 0) return isUgly(n / 2);
  if (n % 3 == 0) return isUgly(n / 3);
  if (n % 5 == 0) return isUgly(n / 5);
  return false;
}