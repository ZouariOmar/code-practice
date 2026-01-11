/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-08
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the minimum number of operations needed such that there is at least one occurrence of k consecutive black blocks.
 *
 * @class     Solution
 * @param str std::string
 * @param k   int
 * @return    int
 */
int Solution::minimumRecolors(std::string str, int k) {
  int ans{INT_MAX}, black_count{};

  for (int i{}, len = str.length(); i < len; i++) {
    if (i - k >= 0 && str[i - k] == 'B')
      black_count--;
    if (str[i] == 'B')
      black_count++;
    ans = std::min(ans, k - black_count);
  }

  return ans;
}