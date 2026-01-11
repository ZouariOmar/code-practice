/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-27
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/best-sightseeing-pair leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum score of a pair of sightseeing spots.
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::maxScoreSightseeingPair(vector<int> &arr) {
  int ans = INT_MIN, m = arr[0], len = arr.size();
  for (int i{1}; i < len; i++) {
    if (arr[i] - i + m > ans)
      ans = arr[i] - i + m;
    if (arr[i] + i > m)
      m = arr[i] + i;
  }
  return ans;
}