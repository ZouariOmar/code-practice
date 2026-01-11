/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-03-26
 * @copyright Copyright (c) 2025
 * @link https://www.youtube.com/watch?v=29xxTiH7PH4 leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @fn         Solution::findDisappearedNumbers(std::vector<int> &)
 * @brief      return an array of all the integers in the range `[1, n]` that do not appear in `nums`
 * @param nums {std::vector<int> &}
 * @return     std::vector<int>
 */
std::vector<int> Solution::findDisappearedNumbers(std::vector<int> &nums) {
  for (size_t i{}, len{nums.size()}; i < len; i++) {
    int idx = abs(nums[i]) - 1;
    if (nums[idx] > 0)
      nums[idx] = -nums[idx];
  }
  std::vector<int> res;
  for (size_t i{}, len{nums.size()}; i < len; i++)
    if (nums[i] > 0)
      res.push_back(i + 1);
  return res;
}