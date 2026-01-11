/**
 * @file lib.cpp
 * @author Zouari Omar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2024-12-08
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/range-sum-query-immutable leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new NumArray::NumArray object
 */
NumArray::NumArray(vector<int> &nums) {
  int sum = 0;
  size_t len{nums.size()};
  for (size_t i{}; i < len; i++) {
    sum += nums[i];
    ans.push_back(sum);
  }
}

/**
 * @brief ### Returns the sum of the elements of nums between indices left and right inclusive
 * @param left {int}
 * @param right {int}
 * @return int
 */
int NumArray::sumRange(int left, int right) {
  if (!left)
    return ans[right];
  return ans[right] - ans[left - 1];
}