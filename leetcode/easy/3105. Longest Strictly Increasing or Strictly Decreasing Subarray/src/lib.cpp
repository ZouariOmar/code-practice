/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-03
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### You are given an array of integers nums. Return the length of the longest subarray of nums which is either strictly increasing or strictly decreasing.
 *
 * @param arr {vector<int> &}
 * @return int
 */
int Solution::longestMonotonicSubarray(vector<int> &nums) {
  int cnt[2] = {1, 1}, ans = 1;
  for (int i = 1, n = nums.size(); i < n; i++) {
    cnt[0] = (nums[i] > nums[i - 1]) * cnt[0] + 1;
    cnt[1] = (nums[i] < nums[i - 1]) * cnt[1] + 1;
    int max[2] = {ans, cnt[cnt[0] < cnt[1]]};
    ans = max[max[0] < max[1]];
  }
  return ans;
}