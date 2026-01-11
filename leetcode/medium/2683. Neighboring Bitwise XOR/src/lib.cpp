/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-01-17
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/neighboring-bitwise-xor leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return true if such an array exists or false otherwise.
 *
 * @param derived {vector<int> &}
 * @return bool
 */
bool Solution::doesValidArrayExist(vector<int> &derived) {
  return accumulate(derived.begin(), derived.end(), 0, [](const int &a, const int &b) -> int {
           return a + b;
         }) % 2 ==
         0;
}
