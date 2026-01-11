/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-04
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-ascending-subarray-sum leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Return the maximum possible sum of an ascending subarray in `nums`.
 *
 * @param nums {vector<itn> &}
 * @return int
 */
int Solution::maxAscendingSum(vector<int> &nums) {
  int len = nums.size(); // Length of `nums`
  int _max = nums[0], tmp_max{nums[0]};

  for (int i{1}; i < len; ++i) {
    tmp_max = nums[i] > nums[i - 1] ? tmp_max + nums[i] : nums[i];
    _max = max(_max, tmp_max);
  }

  return _max;
}