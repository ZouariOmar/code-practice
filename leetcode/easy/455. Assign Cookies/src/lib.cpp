/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-28
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/assign-cookies leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp" 

//? Function/Class prototype dev part

/**
 * @fn      Solution::findContentChildren(std::vector<int> &, std::vector<int> &)
 * @brief   Maximize the number of your content children and output the maximum number
 * @param g {std::vector<int> &}
 * @param s {std::vector<int> &}
 * @return  int
 */
int Solution::findContentChildren(std::vector<int> &g, std::vector<int> &s) {
  sort(g.begin(), g.end()), sort(s.begin(), s.end());
  int i{}, j{};
  while (i < g.size() && j < s.size()) {
    if (g[i] <= s[j])
      i++;
    j++;
  }
  return i;
}