/**
 * 896. Monotonic Array.java
 *
 * Easy Leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-11-08
 */

class Solution {
  public boolean isMonotonic(int[] nums) {
    int n = nums.length;
    if (n == 1)
      return true;

    boolean isInc = true, isDec = true;

    for (int i = 1; i < n; i++) {
      if (!isInc && !isDec)
        return false;

      if (nums[i] < nums[i - 1])
        isInc = false;

      if (nums[i] > nums[i - 1])
        isDec = false;
    }

    return isInc || isDec;
  }
} // Solution class
