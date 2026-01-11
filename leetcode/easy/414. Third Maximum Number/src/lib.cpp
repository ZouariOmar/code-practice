/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-21
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/third-maximum-number leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
 *
 * @class     Solution
 * @param arr std::vector<int> &
 * @return    int
 */
int Solution::thirdMax(std::vector<int> &arr) {
  std::optional<int> first, second, third;

  for (int num : arr) {
    if (first && num == *first || second && num == *second || third && num == *third)
      continue;
    if (!first || num > *first)
      third = second, second = first, first = num;
    else if (!second || num > *second)
      third = second, second = num;
    else if (!third || num > *third)
      third = num;
  }

  return third ? *third : *first;
}