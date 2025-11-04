/**
 * 3354. Make Array Elements Equal to Zero.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/28/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/make-array-elements-equal-to-zero">3354.
 *        Make Array Elements Equal to Zero</a>
 */

class Solution {
  public int countValidSelections(int[] nums) {
    int count = 0, left = 0;

    int right = 0;
    for (final int num : nums)
      right += num;

    for (int i = 0, len = nums.length; i < len; ++i) {
      left += nums[i];
      right -= nums[i];
      if (nums[i] != 0)
        continue;
      if (left == right)
        count += 2;
      if (Math.abs(left - right) == 1)
        count++;
    }

    return count;
  }
} // Solution class
