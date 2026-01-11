/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-11
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/power-of-four leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return `true` if it is a power of four. Otherwise, return `false`.
 * @param n int
 * @return bool
 */
bool Solution::isPowerOfFour(int n) {
  if (n <= 0)
    return false;
  return fmod(log(n) / log(4), 1) == 0;
}