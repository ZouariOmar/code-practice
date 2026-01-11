/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-23
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/ransom-note leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return `true` if ransomNote can be constructed by using the letters from magazine and `false` otherwise
 *
 * @class Solution
 * @param ransomNote string
 * @param magazine string
 * @return bool
 */
bool Solution::canConstruct(string ransomNote, string magazine) {
  if (ransomNote.length() > magazine.length())
    return false;
  int alphabets_counter[26];

  for (const char &c : magazine)
    alphabets_counter[c - 'a']++;

  for (const char &c : ransomNote) {
    if (alphabets_counter[c - 'a'] == 0)
      return false;
    alphabets_counter[c - 'a']--;
  }
  return true;
}