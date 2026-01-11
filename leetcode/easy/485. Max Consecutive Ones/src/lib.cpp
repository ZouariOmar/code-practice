/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-10
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/max-consecutive-ones leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn Solution::findMaxConsecutiveOnes(std::vector<int> &)
 *
 * @brief Return the maximum number of consecutive 1's in the array
 *
 * @param nums {vector<int> &}
 *
 * @return int
 */
int Solution::findMaxConsecutiveOnes(std::vector<int> &nums) {
  int result{}, curr{};
  for (const int &it : nums)
    (it) ? curr++ : (result = std::max(result, curr), curr = 0);
  return std::max(result, curr);
}