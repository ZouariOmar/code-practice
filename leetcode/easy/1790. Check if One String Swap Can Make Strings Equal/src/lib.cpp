/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-05
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.
 *
 * @param s1 string
 * @param s2 string
 * @return bool
 */
bool Solution::areAlmostEqual(string s1, string s2) {
  int i = -1, j = -1;
  int cnt = 0;

  for (int k = 0; k < s1.length(); k++) {
    if (s1[k] != s2[k]) {
      cnt++;
      if (i == -1)
        i = k;
      else if (j == -1)
        j = k;
    }
  }

  if (cnt == 0)
    return true;
  else if (cnt == 2 && s1[i] == s2[j] && s1[j] == s2[i])
    return true;

  return false;
}