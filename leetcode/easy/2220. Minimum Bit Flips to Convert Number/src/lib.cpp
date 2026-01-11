/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      11-09-2024
 * @link      https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/?envType=daily-question&envId=2024-09-11
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return the minimum number of bit flips to convert start to goal.
 * @param start int
 * @param goal int
 * @return int
 */
int Solution::minBitFlips(int start, int goal) {
  // XOR will give 1 where the bits are different
  int xOr = start ^ goal, ans{};

  while (xOr) {
    // If the last bit is 1, increment count
    ans += xOr & 1;

    // Right-shift to check the next bit
    xOr >>= 1;
  }

  return ans;
}