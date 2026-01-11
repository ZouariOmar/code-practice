/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-10
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/clear-digits leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the resulting string after removing all digits.
 *
 * @param s stirng
 * @return string
 */
string Solution::clearDigits(string s) {
  string res;
  for (const char &c : s) {
    if (isdigit(c)) {
      if (!res.empty())
        res.pop_back();
    } else
      res.push_back(c);
  }
  return res;
}