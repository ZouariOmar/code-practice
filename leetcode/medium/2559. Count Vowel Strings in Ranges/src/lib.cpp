/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-02
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-vowel-strings-in-ranges leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return an array ans of size queries.length, where ans[i] is the answer to the ith query
 *
 * @param words {vector<string> &}
 * @param queries {vector<vector<int>> &}
 * @return vector<int>
 */
vector<int> Solution::vowelStrings(vector<string> &words, vector<vector<int>> &queries) {
  size_t len{words.size()}; // Length of the `words` vector
  vector<int> ans,          // The main answer vector
      score(len, 0);        // Count words that start and end with a vowel

  for (size_t i{}; i < len; i++) {
    string word{words[i]};
    if (vowels.find(word[0]) != string::npos && vowels.find(word[word.length() - 1]) != string::npos)
      score[i]++;
    if (i) // If i more than 1
      score[i] += score[i - 1];
  }

  // Use the helper vector `score` to complete the result vector `ans`
  for (vector<int> &it : queries) {
    int l = it[0], r = it[1];
    (!l) ? ans.push_back(score[r]) : ans.push_back(score[r] - score[l - 1]);
  }

  return ans; // Return the result vector
}
