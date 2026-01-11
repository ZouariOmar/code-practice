/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-13
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-length-of-string-after-operations leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the minimum length of the final string s that you can achieve
 *
 * @param s string
 * @return int
 */
int Solution::minimumLength(string s) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  unordered_map<char, int> ump;
  for (const char &c : s)
    ump[c]++;
  int res{};
  for (auto &it : ump)
    (it.second & 1) ? res++ : res += 2;
  return res;
}

/*
* Other solution (more better in Runtime)
int Solution::minimumLength(string s) {
    ios::sync_with_stdio(0); cin.tie(0);
    vector<int>ct(26);
    for(char c:s) ct[c-'a']++;
    int res = 0;
    for(int i=0;i<26;i++) res += (ct[i]%2? 1 : (ct[i]? 2 : 0));
    return res;
}
*/