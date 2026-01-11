/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-09
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/counting-words-with-a-given-prefix leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Helper fn - help Solution::isPrefix() -
 * 
 * @param word {const string &}
 * @param pref {const string &}
 * @return bool
 */
bool Solution::isPrefix(const string &word, const string &pref) {
  size_t len{pref.size()}; // Length of `pref` string
  if (len > word.size())
    return false;
  return word.substr(0, len) == pref;
}

/**
 * @brief ### Return the number of strings in words that contain pref as a prefix
 *
 * @details A prefix of a string s is any leading contiguous substring of s.
 * @param words {vector<string> &}
 * @param pref string
 * @return int
 */
int Solution::prefixCount(vector<string> &words, string pref) {
  int cnt{};
  for (string &word : words)
    if (isPrefix(word, pref))
      cnt++;
  return cnt;
}