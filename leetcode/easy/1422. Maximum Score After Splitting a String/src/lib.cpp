/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-01
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-score-after-splitting-a-string leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum score after splitting the string into two non-empty substrings (i.e. left substring and right substring).
 * @param s string
 * @return int
 */
int Solution::maxScore(string s) {
  int len = s.size() - 1, one_count{}, zero_count{}, res{-1};
  for (int i{}; i < len; i++) {
    (s[i] == '1') ? one_count++ : zero_count++;
    res = max(res, zero_count - one_count);
  }
  return res + one_count + (s[len] == '1');
}