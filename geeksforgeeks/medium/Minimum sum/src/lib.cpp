/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-09
 * @copyright Copyright (c) 2024
 * @link https://www.geeksforgeeks.org/problems/minimum-sum4058/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Find the minimum possible sum of two numbers formed using the elements of the array.
 * All digits in the given array must be used to form the two numbers. Return a string without leading zeroes.
 * @param arr vector<int> &
 * @return string
 */
string Solution::minSum(vector<int> &arr) {
  sort(arr.begin(), arr.end());  // Sort digits in ascending order
  string x, y;

  // Distribute the digits alternately to x and y as strings
  for (size_t i = 0; i < arr.size(); ++i)
    (i % 2) ? y.push_back(arr[i] + '0') : x.push_back(arr[i] + '0');

  string result = addStrings(x, y);                // Calculate the sum and remove leading zeros from the result
  result.erase(0, result.find_first_not_of('0'));  // Remove leading zeros
  return result.empty() ? "0" : result;            // Handle case where result might be empty
}

/**
 * @brief Add two large numbers represented as strings.
 * @param num1 const string &
 * @param num2 const string &
 * @return string
 */
string Solution::addStrings(const string &num1, const string &num2) {
  string result;
  int carry{}, i = num1.size() - 1, j = num2.size() - 1;

  while (i >= 0 || j >= 0 || carry) {
    int sum = carry;
    if (i >= 0) sum += num1[i--] - '0';
    if (j >= 0) sum += num2[j--] - '0';
    result.push_back(sum % 10 + '0');
    carry = sum / 10;
  }
  reverse(result.begin(), result.end());
  return result;
}