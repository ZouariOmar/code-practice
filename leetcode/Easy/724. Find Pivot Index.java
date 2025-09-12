/**
 * 724. Find Pivot Index.java
 *
 * leetcode problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 08/29/2025
 *        <a href="https://leetcode.com/problems/find-pivot-index">
 *        724. Find Pivot Index
 *        </a>
 */

class Solution {
  public int pivotIndex(int[] nums) {
    int sum = 0;
    for (final int i : nums)
      sum += i;
    int leftSum = 0;
    for (int i = 0; i < nums.length; ++i) {
      leftSum += nums[i];
      if (sum == leftSum)
        return i;
      sum -= nums[i];
    }
    return -1;
  }
}
