/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-04
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/unique-length-3-palindromic-subsequences leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the number of unique palindromes of length three that are a subsequence of s.
 *
 * @param s string
 * @return int
 */
int Solution::countPalindromicSubsequence(string s) {
  int n = s.size();
  vector<int> start(26, -1), end(26, n); // first and last character index
  for (int i{}; i < n; i++) {
    if (start[s[i] - 'a'] == -1)
      start[s[i] - 'a'] = i;
    end[s[i] - 'a'] = i;
  }
  int ans{};
  for (int i = 0; i < 26; i++)
    if (start[i] != -1 && end[i] != n) { // if character is present
      unordered_set<int> st;
      for (int j = start[i] + 1; j < end[i]; j++)
        st.insert(s[j]);
      ans += st.size();
    }
  return ans;
}