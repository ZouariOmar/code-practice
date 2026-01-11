/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-20
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/take-k-of-each-character-from-left-and-right leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Take K of Each Character From Left and Right
 * @param s {string}
 * @param k {int}
 * @return {int} - Return the minimum number of minutes needed for you to take at least k of each character, or return -1 if it is not possible to take k of each character.
 */
int Solution::takeCharacters(string s, int k) {
  // Total counts
  vector<int> count(3, 0);
  for (char c : s)
    count[c - 'a']++;

  if (*min_element(count.begin(), count.end()) < k)
    return -1;

  // Sliding Window
  int res = INT_MAX;
  int l = 0;
  for (int r = 0; r < s.length(); r++) {
    count[s[r] - 'a']--;

    while (*min_element(count.begin(), count.end()) < k) {
      count[s[l] - 'a']++;
      l++;
    }
    res = min(res, static_cast<int>(s.length()) - (r - l + 1));
  }
  return res;
}