import java.util.List;

/**
 * 3349. Adjacent Increasing Subarrays Detection I.java
 *
 * Easy leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/14/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i">
 *        leetcode
 *        </a>
 */

class Solution {
  public boolean hasIncreasingSubarrays(List<Integer> nums, int k) {
    int n = nums.size(), inc = 1, prevInc = 0, maxLen = 0;
    for (int i = 1; i < n; i++) {
      if (nums.get(i) > nums.get(i - 1))
        inc++;
      else {
        prevInc = inc;
        inc = 1;
      }
      maxLen = Math.max(maxLen, Math.max(inc >> 1, Math.min(prevInc, inc)));
      if (maxLen >= k)
        return true;
    }
    return false;
  }
} // Solution class
