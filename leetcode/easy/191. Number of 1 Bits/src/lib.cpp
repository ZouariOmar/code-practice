/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-28
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/number-of-1-bits leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ###  write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).
 * @param n int
 * @return int
 */
int Solution::hammingWeight(int n) {
  int res{};                       // Result var
  while (n) {  // Count the hamming weight
    res += (n & 1);
    n >>= 1;
  }
  return res;  // Return the result
}