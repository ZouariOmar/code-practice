/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-20
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1 GFG @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Determine the maximum amount he can loot.
 *
 * @class     Solution
 * @param arr std::vector<int> &
 * @return    int
 */
int Solution::findMaxSum(std::vector<int> &arr) {
  int c{}, d{};
  for (const int &b : arr)
    d = std::max(c = d, c + b);
  return d;
}