/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-06
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/nim-game @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return `true` if you can win the game assuming both you and your friend play optimally, otherwise return `false`
 * @param n int
 * @return true | false
 */
bool Solution::canWinNim(int n) {
  return n % 4;
}