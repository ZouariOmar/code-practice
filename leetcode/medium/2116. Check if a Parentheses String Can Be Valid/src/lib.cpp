/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-12
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if you can make s a valid parentheses string. Otherwise, return false
 *
 * @param s {string &}
 * @param locked {string &}
 * @return bool
 */
bool Solution::canBeValid(string &s, string &locked) {
  const int n = s.size();
  if (n & 1)
    return false;
  int bMin{}, bMax{};
  for (int i{}; i < n; i++) {
    bool op = s[i] == '(', wild = locked[i] == '0';
    bMin += (!op | wild) ? -1 : 1;
    bMax += (op | wild) ? 1 : -1;
    if (bMax < 0)
      return false;
    bMin = max(bMin, 0);
  }
  return bMin == 0;
}