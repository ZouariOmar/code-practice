/**
 * 697. Degree of an Array.java
 *
 * 697 leetcode problem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 24/07/2025
 * @see https://leetcode.com/problems/degree-of-an-array
 */

class Solution {
  public int findShortestSubArray(int[] nums) {
    int max = 0;
    for (final int n : nums)
      max = Math.max(max, n);
    int[] count = new int[max + 1], idx = new int[max + 1];

    max = 0;
    int len = Integer.MAX_VALUE;
    for (int i = 0; i < nums.length; i++) {
      if (++count[nums[i]] == 1)
        idx[nums[i]] = i;
      if (count[nums[i]] > max) {
        max = count[nums[i]];
        len = i - idx[nums[i]] + 1;
      } else if (count[nums[i]] == max) {
        int curr = i - idx[nums[i]] + 1;
        if (curr < len)
          len = curr;
      }
    }

    return len;
  }
} // Solution class
