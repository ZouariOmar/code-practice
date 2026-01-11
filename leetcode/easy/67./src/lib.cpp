/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      09-09-2024
 * @link      https://leetcode.com/problems/add-binary
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------

string Solution::addBinary(string a, string b) {
  string ans;
  int carry = 0;
  int i = a.length() - 1;
  int j = b.length() - 1;

  while (i >= 0 || j >= 0 || carry) {
    if (i >= 0)
      carry += a[i--] - '0';
    if (j >= 0)
      carry += b[j--] - '0';
    ans += carry % 2 + '0';
    carry /= 2;
  }

  reverse(begin(ans), end(ans));
  return ans;
}