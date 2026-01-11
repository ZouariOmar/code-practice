/**
 * 1493. Longest Subarray of 1s After Deleting One Element.java
 *
 * leetcode
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 08/24/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element">
 *        1493. Longest Subarray of 1's After Deleting One Element
 *        </a>
 */

class Solution {
  public int longestSubarray(int[] nums) {
    int left = 0, zeros = 0, res = 0;

    for (int right = 0; right < nums.length; ++right) {
      if (nums[right] == 0)
        ++zeros;

      while (zeros > 1) {
        if (nums[left++] == 0)
          --zeros;
      }

      res = Math.max(res, right - left);
    }

    return res;
  }
} // Solution class
