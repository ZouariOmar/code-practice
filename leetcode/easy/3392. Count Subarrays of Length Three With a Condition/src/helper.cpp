/**
 * @file      helper.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     helper source file
 * @version   0.1
 * @date      2025-04-27
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition leetcode @endlink */

//? Include prototype declaration part
#include "../include/inc.hpp"

//? Function(s) prototype dev part

int Solution::countSubarrays(std::vector<int> &nums) {
  int result{};
  for (size_t i{}, len(nums.size()); i < len - 2; ++i)
    if (2 * (nums[i] + nums[i + 2]) == nums[i + 1])
      result++;
  return result;
}
