/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-09
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/is-subsequence leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return `true` if s is a subsequence of t, or `false` otherwise.
 *
 * @class   Solution
 * @param s std::string
 * @param t std::string
 * @return  bool
 */
bool Solution::isSubsequence(std::string s, std::string t) {
  int score{};
  for (const char &c : t)
    if (s[score] == c)
      score++;
  return score == s.size();
}