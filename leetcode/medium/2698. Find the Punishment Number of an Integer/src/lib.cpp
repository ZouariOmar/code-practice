/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-15
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-the-punishment-number-of-an-integer leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the punishment number of n
 *
 * @param n int
 * @return int
 */
int Solution::punishmentNumber(int n) {
  int arr[] = {1, 9, 10, 36, 45, 55, 82, 91, 99, 100, 235, 297, 369, 370, 379, 414, 657, 675, 703, 756, 792, 909, 918, 945, 964, 990, 991, 999, 1000};
  int sum = 0;
  for (int i{}; i < 29; i++) {
    if (arr[i] <= n)
      sum += arr[i] * arr[i];
    else if (arr[i] > n)
      break;
  }
  return sum;
}