/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-18
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/longest-palindrome leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the length of the longest that can be built with those letters.
 *
 * @class   Solution
 * @param s std::string
 * @return  int
 */
int Solution::longestPalindrome(std::string s) {
  std::unordered_map<char, int> ump;
  int oddCount{};
  for (const char &c : s) {
    ump[c - 'a']++;
    ump[c]++;
    (ump[c] % 2 == 1) ? oddCount++ : oddCount--;
  }
  return (oddCount > 1) ? s.length() - oddCount + 1 : s.length();
}