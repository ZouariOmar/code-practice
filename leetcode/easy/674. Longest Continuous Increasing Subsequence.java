/**
 * 674. Longest Continuous Increasing Subsequence.java
 *
 * Leetcode problem
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 1.0
 * @since 12/07/2025
 * @see https://leetcode.com/problems/longest-continuous-increasing-subsequence
 */

class Solution {
  public int findLengthOfLCIS(int[] nums) {
    int res = 1, curr = 1, len = nums.length;
    for (int i = 0; i < len - 1; ++i) {
      if (nums[i + 1] > nums[i])
        ++curr;
      else {
        res = Math.max(curr, res);
        curr = 1;
      }
    }
    return Math.max(curr, res);
  }
} // Solution class
