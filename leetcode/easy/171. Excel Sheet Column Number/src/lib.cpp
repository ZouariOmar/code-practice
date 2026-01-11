/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-21
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/excel-sheet-column-number leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given a string columnTitle that represents the column title as appears in an Excel sheet,
 * return its corresponding column number.
 * @param str string
 * @return int
 */
int Solution::titleToNumber(string str) {
  size_t n = str.length();
  int sum = (((int)(str[0] - 'A')) + 1);
  for (int i = 1; i < n; i++) {
    sum *= 26;
    sum += ((int)(str[i] - 'A') + 1);
  }
  return sum;
}