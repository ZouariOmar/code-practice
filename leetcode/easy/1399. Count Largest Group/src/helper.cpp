/**
 * @file    helper.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   helper source file
 * @version 0.1
 * @date    2025-04-23
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-largest-group leetcode @endlink
 */

//? Include prototype declaration part
#include "../include/inc.hpp"

//? Function(s)/Class(es) prototype dev part

int Solution::digitSum(int n) const {
  int sum{};
  while (n)
    sum += n % 10, n /= 10;
  return sum;
}

int Solution::countlargestGroup(int n) {
  int sumDigits[37]{0};
  for (int i(1); i <= n; i++)
    sumDigits[digitSum(i)]++;
  int maxIt{}, counter{};
  for (int i{}; i < 37; i++) {
    if (sumDigits[i] > maxIt)
      maxIt = sumDigits[i], counter = 1;
    else if (sumDigits[i] == maxIt)
      counter++;
  }
  return counter;
}
