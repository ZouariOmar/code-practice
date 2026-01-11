/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      23-09-2024
 * @link      https://leetcode.com/problems/extra-characters-in-a-string
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

/**
 * @brief ### Return the minimum number of extra characters left over if you break up s optimally
 * @param s string
 * @param dictionary vector<string>
 * @return int
 */
int Solution::minExtraChar(string s, vector<string> &dict) {
  for (string &val : dict)
    um[val]++;

  return solve(s, 0);  // Start the recursion from index 0
}

int Solution::solve(string &s, int ind) {
  if (ind >= s.size())  // base condition, where recursion gets over
    return 0;

  if (memo.find(ind) != memo.end())  // Return memoized result if already computed
    return memo[ind];

  int extra = INT_MAX;
  string tmp = "";

  // Try all substrings starting from the current index
  for (int i = ind; i < s.size(); i++) {
    tmp += s[i];
    if (um.find(tmp) != um.end()) {
      // If the substring is in the dictionary, solve for the remaining part
      extra = min(extra, solve(s, i + 1));
    }
  }

  // Consider the case where the current character is counted as extra
  // basically skipping the current ind = 0
  extra = min(extra, 1 + solve(s, ind + 1));

  // Memoize the result for the current index
  memo[ind] = extra;

  return memo[ind];
}