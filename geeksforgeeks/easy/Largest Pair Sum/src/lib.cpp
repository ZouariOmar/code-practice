/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-08
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/pair-sum--120604/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief  ## Find the largest pair sum in an array of distinct integers.
 * @param arr vector<int> &
 * @return int
 */
int Solution::pairsum(vector<int> &arr) {
  pair<int, int> sum(-1, -1);
  for (int it : arr) {
    if (sum.first < it) {
      sum.second = sum.first;
      sum.first = it;
    } else if (sum.second < it)
      sum.second = it;
  }
  return sum.first + sum.second;
}