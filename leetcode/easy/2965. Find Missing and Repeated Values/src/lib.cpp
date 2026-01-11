/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-06
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-missing-and-repeated-values leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return a 0-indexed integer array ans of size 2 where `ans[0]` equals to `a` and `ans[1]` equals to `b`
 *
 * @class      Solution
 * @param grid std::vector<std::vector<int>>
 * @return     std::vector<int>
 */
std::vector<int> Solution::findMissingAndRepeatedValues(std::vector<std::vector<int>> &grid) {
  int *tracker = new int[grid.size() * grid.size()]{};

  std::vector<int> ans(2, 0);
  for (const std::vector<int> &vec : grid) // Track `a` and `b`
    for (const int &it : vec)
      tracker[it - 1]++;

  for (int i{}; i < grid.size() * grid.size(); i++)
    if (tracker[i] == 2)
      ans[0] = i + 1;
    else if (tracker[i] == 0)
      ans[1] = i + 1;

  delete[] tracker;
  return ans;
}