/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-08
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the minimum number of swaps to make s balanced.
 * @param s {string}
 * @return int
 */
int Solution::minSwaps(string s) {
  int size = 0;
  size_t n{s.size()};
  for (size_t i{}; i < n; i++) {
    if (s[i] == '[')
      size++;
    else if (size > 0)
      size--;
  }
  return (size + 1) / 2;
}