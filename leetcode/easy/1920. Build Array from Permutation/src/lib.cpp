/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-12-25
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/build-array-from-permutation @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.
 * @param nums {vector<int> &}
 * @return vector<int>
 */
vector<int> Solution::buildArray(vector<int> &nums) {
  int n = nums.size();
  for (int i{}; i < n; i++)
    nums[i] += n * (nums[nums[i]] % n);
  for (int i{}; i < n; i++)
    nums[i] /= n;
  return nums;
}
