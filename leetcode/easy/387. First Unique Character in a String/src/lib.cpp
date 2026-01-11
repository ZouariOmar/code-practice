/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-01
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/first-unique-character-in-a-string leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the first non-repeating character in it and return its index. If it does not exist, return -1.
 *
 * @class   Solution
 * @param s std::string
 * @return  int
 */
int Solution::firstUniqChar(std::string s) {
  int hash[26] = {};
  for (const char &c : s)
    hash[c - 'a']++;

  for (size_t i{}, len{s.length()}; i < len; i++)
    if (hash[s[i] - 'a'] == 1) // The special character exist
      return i;

  return -1; // The special character not exist
}