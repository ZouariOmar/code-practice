/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-31
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/guess-number-higher-or-lower leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the number that I picked.
 *
 * @param n int
 * @return int
 */
int Solution::guessNumber(int n) {
  int l{1}, h{n};
  while (l <= h) {
    int mid{l + (h - l) / 2};
    int num{guess(mid)};
    if (!num)
      return mid;
    (num == 1) ? h = mid - 1 : l = mid + 1;
  }
  return -1;
}