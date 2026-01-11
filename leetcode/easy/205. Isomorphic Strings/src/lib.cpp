/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-29
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/isomorphic-strings leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Determine if they are isomorphic.
 * @param s string
 * @param t string
 * @return true or false
 */
bool Solution::isIsomorphic(string s, string t) {
  unordered_map<char, char> s1,  // `s` index-string tracker
      t1;                        // `t` index-string tracker
  size_t len{s.length()};        // Sizeof the string `s`

  for (size_t i{}; i < len; i++) {
    char charS = s[i], charT = t[i];  // Store chars (memo_opt)

    if (!s1.count(charS))  // `charS` not mapped in `s1`
      s1[charS] = charT;
    else if (s1[charS] != charT)  // Unexpected equality between the value of map and tested char in the key `charS`
      return false;

    if (!t1.count(charT))  // `charT` not mapped in `t1`
      t1[charT] = charS;
    else if (t1[charT] != charS)  // Unexpected equality between the value of map and tested char in the key `charT`
      return false;
  }
  return true;  // Passed the test ==> s and t are isomorphic
}