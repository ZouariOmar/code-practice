/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-25
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/word-break1352/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @fn               wordBreak(std::string &, std::vector<std::string> &)
 * @brief            determine whether the string `s` can be formed by concatenating one or more words from the `dictionary`
 * @param s          {std::string &}
 * @param dictionary {std::vector<std::string> &}
 * @return           int
 */
int Solution::wordBreak(std::string &s, std::vector<std::string> &dictionary) {
  size_t n{s.length()};
  std::vector<bool> dp(n + 1, false);
  dp[0] = true;
  for (size_t i{}; i < n; i++) {
    if (!dp[i])
      continue;
    for (const std::string &word : dictionary) {
      size_t len{word.length()};
      if (i + len <= n && s.substr(i, len) == word)
        dp[i + len] = true;
    }
  }
  return dp[n];
}