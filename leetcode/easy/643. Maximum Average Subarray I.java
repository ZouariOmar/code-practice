/**
 * @file 643. Maximum Average Subarray I.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 643. Maximum Average Subarray I.java header file
 * @version 0.1
 * @date 2025-07-02
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-average-subarray-i
 *       leetcode @endlink
 */

class Solution {
  public double findMaxAverage(int[] nums, int k) {
    int sum = 0, n = nums.length;
    for (int i = 0; i < k; ++i)
      sum += nums[i];
    double res = (double) sum / k;

    for (int i = k; i < n; ++i) {
      sum = sum - nums[i - k] + nums[i];
      res = Math.max(res, (double) sum / k);
    }

    return res;
  }
} // Solution class
