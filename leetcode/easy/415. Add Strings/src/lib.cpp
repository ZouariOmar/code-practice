/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-10
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/add-strings leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the sum of num1 and num2 as a string.
 *
 * @class      Solution
 * @param num1 std::string
 * @param num2 std::string
 * @return     std::string
 */
std::string Solution::addStrings(std::string num1, std::string num2) {
  int i = num1.size() - 1,
      j = num2.size() - 1,
      carry{};
  std::string result;

  while (i >= 0 || j >= 0 || carry) {
    int digit1 = (i >= 0) ? num1[i] - '0' : 0;
    int digit2 = (j >= 0) ? num2[j] - '0' : 0;
    int total = digit1 + digit2 + carry;
    carry = total / 10;
    result.push_back((total % 10) + '0');
    --i, --j;
  }

  std::reverse(result.begin(), result.end());
  return result;
}