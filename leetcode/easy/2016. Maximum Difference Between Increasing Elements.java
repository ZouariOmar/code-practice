/**
 * @file 2016. Maximum Difference Between Increasing Elements.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 2016. Maximum Difference Between Increasing Elements.java header file
 * @version 0.1
 * @date 2025-06-16
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-difference-between-increasing-elements
 *       leetcode @endlink
 */

class Solution {
  public int maximumDifference(int[] nums) {
    int diff = -1, min = nums[0];
    for (int i = 1, len = nums.length; i < len; i++) {
      if (nums[i] > min)
        diff = Math.max(diff, nums[i] - min);
      if (nums[i] < min)
        min = nums[i];
    }
    return diff;
  }
} // Solution class
