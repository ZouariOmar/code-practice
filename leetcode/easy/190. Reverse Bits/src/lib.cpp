/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-23
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/reverse-bits leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Reverse bits of a given 32 bits unsigned integer.
 * *
 * - #### Using the CA2
 * @param n unit32_t
 * @return uint32_t
 */
uint32_t Solution::reverseBits(uint32_t n) {
  uint32_t ans = 0;
  for (size_t i{}; i < 32; i++) {
    ans <<= 1;
    ans |= (n & 1);
    n >>= 1;
  }
  return ans;
}