/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-12
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/?envType=daily-question&envId=2025-03-12 @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum between the number of positive integers and the number of negative integers
 *
 * @class      Solution
 * @param nums {std::vector<int> &}
 * @return     int
 */
int Solution::maximumCount(std::vector<int> &nums) {
  int neg{}, pos{};
  for (const int &num : nums)
    pos += num > 0, neg += num < 0;
  return std::max(pos, neg);
}
