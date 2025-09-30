import java.util.Arrays;

/**
 * 976. Largest Perimeter Triangle.java
 *
 * Leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 28/09/2025
 *        <a href="https://leetcode.com/problems/largest-perimeter-triangle">
 *        leetcode
 *        </a>
 */

class Solution {
  public int largestPerimeter(int[] nums) {
    Arrays.sort(nums);
    for (int i = nums.length - 1; i >= 2; i--)
      if (nums[i - 1] + nums[i - 2] > nums[i])
        return nums[i] + nums[i - 1] + nums[i - 2];
    return 0;
  }
} // Solution class
