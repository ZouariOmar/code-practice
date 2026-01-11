/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-25
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/arranging-coins leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"  

//? Function/Class prototype dev part

/**
 * @fn      Solution::arrangeCoins(int)
 * @brief   Return the number of complete rows of the staircase you will build.
 * @param n int
 * @return  int
 */
int Solution::arrangeCoins(int n) {
  return floor(sqrt((double)2 * n + 0.25) - 0.5);
}