/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-22
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/number-of-segments-in-a-string leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the number of segments in the string
 *
 * @class   Solution
 * @param s std::string
 * @return  int
 */
int Solution::countSegments(std::string s) {
  int res{};
  s.push_back(' ');
  for (int i{1}; i < s.size(); ++i)
    if (s[i] == ' ' && s[i - 1] != ' ')
      ++res;
  return res;
}