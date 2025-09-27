/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-09
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/in-first-but-second5423/1?page=1&difficulty=Easy&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the numbers which are present in the first array `a`, but not present in the second array `b`.
 *
 * @param a std::vector<int>
 * @param b std::vector<int>
 * @return  std::vector<int>
 */
std::vector<int> Solution::findMissing(std::vector<int> &a, std::vector<int> &b) {
  std::unordered_set<int> ust(b.begin(), b.end());
  std::vector<int> result;
  for (const int &it : a)
    if (!ust.count(it))
      result.push_back(it);
  return result;
}
