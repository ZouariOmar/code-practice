/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-19
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/excel-sheet-column-title leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return its corresponding column title as it appears in an Excel sheet
 * @param columnNumber int
 * @return string
 */
string Solution::convertToTitle(int columnNumber) {
  string ans;
  while (columnNumber) {
    ans = char('A' + (columnNumber - 1) % 26) + ans;
    columnNumber = (columnNumber - 1) / 26;
  }
  return ans;
}