/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-10
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the length of the longest substring with all distinct characters.
 *
 * @param s {string &}
 * @return int
 */
int Solution::longestUniqueSubstr(string &s) {
  unordered_map<char, int> charIndexMap;
  int longestSubStrLen{},
      start{};

  for (int end{}; end < s.length(); ++end) {
    char currentChar = s[end];
    if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= start)
      start = charIndexMap[currentChar] + 1;                   // Move the start to the right of the duplicate
    charIndexMap[currentChar] = end;                           // Update the index of the current character
    longestSubStrLen = max(longestSubStrLen, end - start + 1); // Calculate the max length
  }

  return longestSubStrLen;
}