/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-04-09
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function(s)/Class(es) prototype dev part

/**
 * @fn Solution::minOperations(std::vector<int> &, int)
 *
 * @brief Return the minimum number of operations required to make every element in nums equal to k. If it is impossible to make all elements equal to k, return -1.
 *
 * @param nums {std::vector<int> &}
 * @param k    int
 *
 * @return int
 */
int Solution::minOperations(std::vector<int> &nums, int k) {
  std::sort(nums.begin(), nums.end());
  if (k > nums[0])
    return -1;

  int res{};
  for (int i = 1; i < nums.size(); i++)
    if (nums[i - 1] != nums[i])
      res++;

  return res + (k != nums[0]);
}