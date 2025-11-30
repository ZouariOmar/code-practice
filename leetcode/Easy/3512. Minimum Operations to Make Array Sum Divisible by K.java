/**
 * 3512. Minimum Operations to Make Array Sum Divisible by K.java
 *
 * Leetcode easy problem
 *
 * <p>
 * NONE
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 29/11/2025
 * @see https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k
 *      leetcode
 */

class Solution {
  public int minOperations(int[] nums, int k) {
    int sum = 0;
    for (int i = 0; i < nums.length; i++)
      sum += nums[i];
    return sum % k;
  }
} // Solution class
