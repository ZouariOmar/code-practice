/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-16
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/convert-a-number-to-hexadecimal leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return a string representing its hexadecimal representation
 *
 * @param n   int
 * @return    std::string
 */
std::string Solution::toHex(int n) {
  if (!n)
    return "0";
  std::string result;
  u_int u_n = n;
  while (u_n) {
    u_int rem{u_n % 16};
    (rem < 10) ? result += (char)rem + 48 : result += (char)rem + 87;
    u_n /= 16;
  }
  return std::reverse(result.begin(), result.end()), result;
}