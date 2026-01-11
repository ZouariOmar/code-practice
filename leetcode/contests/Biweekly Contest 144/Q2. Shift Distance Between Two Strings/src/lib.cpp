/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-11-23
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/contest/biweekly-contest-144/problems/shift-distance-between-two-strings leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the minimum shift distance from `s` to to `t`
 * ! s and t consist only of lowercase English letters
 * @param s {string}
 * @param t {string}
 * @param nextCost {vector<int> &}
 * @param previousCost {vector<int> &}
 * @return long long
 */
long long Solution::shiftDistance(string s, string t, vector<int> &nextCost, vector<int> &previousCost) {
  long long cost{};
  for (size_t i{}, len{s.size()}; i < len; i++) {
    int diff = (t[i] - s[i] + 26) % 26,
        alpha_pos{s[i] - 'a'};
    long long fCost{},
        bCost{};

    for (int j = 0; j < diff; j++)
      fCost += nextCost[(alpha_pos + j) % 26];
    for (int j = 0; j < (26 - diff); j++)
      bCost += previousCost[(alpha_pos - j + 26) % 26];
    cost += min(fCost, bCost);
  }
  return cost;
}
