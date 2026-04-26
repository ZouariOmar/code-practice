/**
 * @file      2839. Check if Strings Can be Made Equal With Operations I.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     2839. Check if Strings Can be Made Equal With Operations I source file
 * @version   0.1
 * @date      03/29/2026
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part

class Solution {
public:
  bool canBeEqual(const std::string s1, const std::string s2) const {
    return ((s1[0] == s2[0] && s1[2] == s2[2]) || (s1[0] == s2[2] && s1[2] == s2[0])) &&
           ((s1[1] == s2[1] && s1[3] == s2[3]) || (s1[1] == s2[3] && s1[3] == s2[1]));
  }
}; // Solution class
