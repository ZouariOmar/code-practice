/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-20
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-unique-binary-string leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return a binary string of length `n` that does not appear in nums
 *
 * @param nums {vector<string> &}
 * @return string
 */
string Solution::findDifferentBinaryString(vector<string> &nums) {
  string result;
  size_t len{nums.size()};
  for (int i{}; i < len; i++)
    (nums[i][i] == '1') ? result += '0' : result += '1';
  return result;
}