/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-10
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/word-subsets leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return an array of all the universal strings in words1. You may return the answer in any order.
 *
 * @param words1 {vector<string> &}
 * @param words2 {vector<string> &}
 * @return vector<string>
 */
vector<string> Solution::wordSubsets(vector<string> &words1, vector<string> &words2) {
  int maxCount[26]{};
  for (const string &word : words2) {
    int tmpCount[26]{};
    for (const char &ch : word)
      tmpCount[ch - 'a']++;
    for (int i = 0; i < 26; ++i)
      maxCount[i] = std::max(maxCount[i], tmpCount[i]);
  }

  vector<string> result; // To store the result

  for (const auto &word : words1) {
    int tmpCount[26]{};
    for (const char &ch : word)
      tmpCount[ch - 'a']++;

    bool isUniversal{true};
    for (int i{}; i < 26; ++i)
      if (tmpCount[i] < maxCount[i]) {
        isUniversal = false;
        break;
      }

    if (isUniversal)
      result.push_back(word);
  }

  return result;
}