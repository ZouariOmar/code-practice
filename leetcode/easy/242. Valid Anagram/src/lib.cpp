/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-14
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/valid-anagram leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if `t` is an anagram of `s`, and false otherwise.
 * @param t {string}
 * @param s {string}
 * @return true | false
 */
bool Solution::isAnagram(string t, string s) {
  unordered_map<char, int> count;

  for (char &x : s)  // Count the frequency of characters in string s
    count[x]++;

  for (char &x : t)  // Decrement the frequency of characters in string t
    count[x]--;

  for (auto x : count)  // Check if any character has non-zero frequency
    if (x.second)
      return false;

  return true;  // `t` is an anagram of `s`
}