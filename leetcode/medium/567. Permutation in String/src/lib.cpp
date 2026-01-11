/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-05
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/permutation-in-string leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if one of s1's permutations is the substring of s2.
 * @details Using the sliding window technique
 * @param s1 {string}
 * @param s2 {string}
 * @return {true or false}
 */
bool Solution::checkInclusion(string s1, string s2) {
  if (s1.length() > s2.length()) return false;

  vector<int> s1Count(26, 0), s2Count(26, 0);

  // Count frequencies of s1 and the first window in s2
  for (int i = 0; i < s1.length(); ++i) {
    s1Count[s1[i] - 'a']++;
    s2Count[s2[i] - 'a']++;
  }

  // Slide the window over s2
  for (int i = 0; i < s2.length() - s1.length(); ++i) {
    if (s1Count == s2Count) return true;
    // Update the window
    s2Count[s2[i] - 'a']--;
    s2Count[s2[i + s1.length()] - 'a']++;
  }

  // Check the last window
  return s1Count == s2Count;
}