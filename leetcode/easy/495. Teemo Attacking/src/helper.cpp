/**
 * @file      helper.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     helper source file
 * @version   0.1
 * @date      2025-04-20
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/teemo-attacking leetcode @endlink
 */

//? Include prototype declaration part
#include "../include/inc.hpp"
#include <iostream>

//? Function(s)/Class(es) prototype dev part

int Solution::findPoisonedDuration(std::vector<int> &timeSeries, int duration) {
  int res{};
  for (size_t i{}; i < timeSeries.size() - 1; i++) {
    int diff = timeSeries[i + 1] - timeSeries[i];
    res += diff > duration ? duration : diff;
  }
  return timeSeries.size() ? res + duration : 0;
}
