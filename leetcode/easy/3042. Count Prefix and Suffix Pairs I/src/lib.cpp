/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-08
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-prefix-and-suffix-pairs-i  leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Helper function (help `Solution::countPrefixSuffixPairs` fn)
 *
 * @param s1 {const string &}
 * @param s2 {const string &}
 * @return bool
 */
bool Solution::isPrefixAndSuffix(const string &s1, const string &s2) {
  int n1 = s1.size(), n2 = s2.size();
  if (n1 > n2)
    return false;
  return s2.substr(0, n1) == s1 && s2.substr(n2 - n1) == s1;
}

/**
 * @brief ### Return an integer denoting the number of index pairs (i, j) such that i < j, and isPrefixAndSuffix(words[i], words[j]) is true
 *
 * @param words {vector<string> &}
 * @return int
 */
int Solution::countPrefixSuffixPairs(vector<string> &words) {
  int cnt{},              // Number of prefix-suffix-pairs
      len = words.size(); // Length `words` vector
  for (int i{}; i < len; ++i)
    for (int j{i + 1}; j < len; ++j)
      if (isPrefixAndSuffix(words[i], words[j]))
        cnt++;
  return cnt;
}