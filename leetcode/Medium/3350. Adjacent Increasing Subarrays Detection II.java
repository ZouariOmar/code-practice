import java.util.List;

/**
 * 3350. Adjacent Increasing Subarrays Detection II.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/15/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/adjacent-increasing-subarrays-detection-ii">
 *        leetcode
 *        </a>
 */

class Solution {
  public int maxIncreasingSubarrays(List<Integer> nums) {
    int n = nums.size(), inc = 1, prevInc = 0, maxLen = 0;

    for (int i = 1; i < n; i++) {
      if (nums.get(i) > nums.get(i - 1))
        inc++;
      else {
        prevInc = inc;
        inc = 1;
      }
      maxLen = Math.max(maxLen, Math.max(inc >> 1, Math.min(prevInc, inc)));
    }

    return maxLen;
  }
} // Solution class
