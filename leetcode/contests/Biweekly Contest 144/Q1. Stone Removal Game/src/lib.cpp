/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-23
 * @copyright Copyright (c) 2024
 * @link  leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if Alice wins the game and false otherwise.©leetcode
 * @param n int
 * @return true | false
 */
bool Solution::canAliceWin(int n) {
  int rm{10};
  bool turn{true};  // Alice => true
  while (1) {
    if (n < rm) break;
    n -= rm, rm--;
    turn = !turn;
  }
  return !turn;
}
