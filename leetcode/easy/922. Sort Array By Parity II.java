/**
 * 922. Sort Array By Parity II.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 11/01/2026
 */

class Solution {
  public int[] sortArrayByParityII(int[] nums) {
    int n = nums.length, i = 0, j = 1;

    while (i < n && j < n) {
      if (nums[i] % 2 == 0)
        i += 2;
      else if (nums[j] % 2 == 1)
        j += 2;
      else {
        nums[i] ^= nums[j];
        nums[j] ^= nums[i];
        nums[i] ^= nums[j];
        i += 2;
        j += 2;
      }
    }
    return nums;
  }
} // Solution class
