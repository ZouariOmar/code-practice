/**
 * @file      helper.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     helper source file
 * @version   0.1
 * @date      2025-04-28
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/reverse-string-ii leetcode @endlink
 */

//? Include prototype declaration part
#include "../include/inc.hpp"
#include <algorithm>

//? Function prototype dev part

std::string Solution::reverseStr(std::string s, int k) {
  size_t i{}, len(s.length());
  while (i + k < len)
    std::reverse(s.begin() + i, s.begin() + i + k), i += 2 * k;
  reverse(s.begin() + i, s.end());
  return s;
}
