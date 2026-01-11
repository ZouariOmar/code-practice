/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-07
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/string-matching-in-an-array leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return all strings in words that is a substring of another word
 *
 * @param words {vector<string> &}
 * @return vector<string>
 */
vector<string> Solution::stringMatching(vector<string> &words) {
  sort(words.begin(), words.end(), [](const string &a, const string &b) -> bool {
    return a.size() > b.size();
  });
  int len = words.size();
  vector<string> res;
  for (int i{}; i < len; i++)
    for (int j{i + 1}; j < len; j++)
      if (words[i].find(words[j]) != string::npos) res.push_back(words[j]);
  sort(res.begin(), res.end());
  res.erase(unique(res.begin(), res.end()), res.end());
  return res;
}