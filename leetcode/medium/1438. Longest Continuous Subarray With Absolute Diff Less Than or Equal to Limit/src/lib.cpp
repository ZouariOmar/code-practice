/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 * @link      https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief the size of the longest non-empty subarray such that the absolute difference between any two elements of this subarray is less than or equal to limit
 *
 * @param nums
 * @param limit
 * @return int
 */
int Solution::longestSubarray(vector<int>& nums, int limit) {
  if (!nums.size())
    return 0;
  else if (nums.size() == 1)
    return 1;
  else if (nums.size() == 2)
    return 1 + (abs(nums[0] - nums[1]) <= limit);
  else {
    int result = 1;
    int fix_i = 0;
    int cmp_val = nums[fix_i];
    int tmp_res = 0;

    int i = 0;
    while (i < nums.size() + 1) {
      if (abs(cmp_val - nums[i]) <= limit) {
        tmp_res++;
        i++;
      } else {
        if (tmp_res > result)
          result = tmp_res;
        tmp_res = 0;
        cmp_val = nums[++fix_i];
        i = fix_i;
      }
    }
    return result;
  }

  return 0;
}