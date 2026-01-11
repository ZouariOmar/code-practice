/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-09
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/power-of-three leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if it is a power of three. Otherwise, return false.
 * @param n int
 * @return {bool}
 */
bool Solution::isPowerOfThree(int n) {
  if (n < 1)
    return false;
  while ((n % 3) == 0)
    n /= 3;
  return (n == 1);
}