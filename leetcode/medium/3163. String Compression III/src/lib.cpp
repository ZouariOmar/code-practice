/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-04
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/string-compression-ii leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given a string word, compress it using the following algorithm:
 * *
 * - #### Begin with an empty string comp. While word is not empty, use the following operation:
 * *
 * - Remove a maximum length prefix of word made of a single character c repeating at most 9 times.
 * *
 * - Append the length of the prefix followed by c to comp.
 * @param s string
 * @return string - Return the string comp.
 */
string Solution::compressedString(string s) {
  string new_s = "";     // New coded string
  size_t len{s.size()};  // Sizeof string `s`
  char cc = s[0];        // Current character
  int occ{1};            // Occurrence number of current char
  for (size_t i{1}; i < len; i++) {
    if (s[i] == cc && occ < 9)
      occ++;
    else {
      new_s += to_string(occ) + cc;
      cc = s[i];
      occ = 1;
    }
  }
  return new_s += to_string(occ) + cc, new_s;  // Return the result string
}