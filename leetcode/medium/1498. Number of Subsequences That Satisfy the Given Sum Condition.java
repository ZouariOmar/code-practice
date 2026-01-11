import java.util.Arrays;

/**
 * @file 1498. Number of Subsequences That Satisfy the Given Sum Condition.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 1498. Number of Subsequences That Satisfy the Given Sum Condition.java
 *        file
 * @version 0.1
 * @date 2025-06-29
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition
 *       leetcode @endlink
 */

class Solution {
  public int numSubseq(int[] nums, int target) {
    Arrays.sort(nums);
    int mod = 1_000_000_007, n = nums.length;

    int[] power = new int[n];
    power[0] = 1;
    for (int i = 1; i < n; i++)
      power[i] = (power[i - 1] * 2) % mod;

    int i = 0, j = n - 1, res = 0;
    while (i <= j) {
      if (nums[i] + nums[j] <= target) {
        res = (res + power[j - i]) % mod;
        i++;
      } else {
        j--;
      }
    }
    return res;
  }
} // Solution class
