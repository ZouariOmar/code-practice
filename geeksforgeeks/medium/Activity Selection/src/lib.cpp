/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-28
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/activity-selection-1587115620/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @fn      Solution::activitySelection(std::vector<int> &, std::vector<int> &)
 * @brief   Determine the maximum number of activities that a person can complete in a day
 * @param s {std::vector<int> &}
 * @param f {std::vector<int> &}
 * @return  int
 */
int Solution::activitySelection(std::vector<int> &s, std::vector<int> &f) {
  std::vector<pii> temp;
  for (size_t i{}; i < s.size(); i++)
    temp.push_back({f[i], s[i]});
  sort(temp.begin(), temp.end());
  int lastTemp{-1}, act{};
  for (const pii &time : temp) 
    if (time.second > lastTemp)
      lastTemp = time.first, act++;
  return act;
}