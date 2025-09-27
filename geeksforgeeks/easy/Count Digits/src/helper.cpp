/**
 * @file    helper.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   helper source file
 * @version 0.1
 * @date    2025-04-27
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/count-digits5716/1?page=1&difficulty=Easy&sortBy=submissions geeksforgeeks @endlink
 */

//? Include prototype declaration part
#include "../include/inc.hpp"

//? Function(s) prototype dev part

int Solution::evenlyDivides(int n) {
  int og(n), cnt{};
  while (n) {
    int lt(n % 10);
    n /= 10;
    if (lt && og % lt == 0)
      cnt++;
  }
  return cnt;
}
