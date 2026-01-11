/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-17
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/add-digits leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Add all `x` digits until the result has only one digit, and return it.
 * @param x {int}
 * @return {int}
 */
int Solution::addDigits(int x) {
  return (!x) ? 0 : (x % 9 == 0) ? 9
                                 : x % 9;
}