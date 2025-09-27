/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-15
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/sum-of-distinct-elements4801/1?page=3&sortBy=difficulty GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the sum of distinct elements in an array
 *
 * @class     Solution
 * @param arr {std::vector<int> &}
 * @return    int
 */
int Solution::findSum(std::vector<int> &arr) {
  std::unordered_set<int> ust(arr.begin(), arr.end());
  int sum{};
  for (const int &it : ust)
    sum += it;
  return sum;
}