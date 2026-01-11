/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-24
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/happy-number leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if n is a happy number, and false if not.
 * @param n int
 * @return true || false
 */
bool Solution::isHappy(int n) {
  int sum = n, x = n;

  while (sum > 9) {  // This loop executes till the sum of square of digits obtained is not a single digit number
    sum = 0;

    while (x > 0) {  // This loop finds the sum of square of digits
      int d = x % 10;
      sum += d * d;
      x /= 10;
    }
    x = sum;
  }

  return (sum == 7 || sum == 1);
}