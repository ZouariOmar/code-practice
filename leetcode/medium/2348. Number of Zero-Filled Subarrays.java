/**
 * 2348. Number of Zero-Filled Subarrays.java
 *
 * leetcode problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 08/19/2025
 *        <a href=
 *        "https://leetcode.com/problems/number-of-zero-filled-subarrays/description/?envType=daily-question&envId=2025-08-19">
 *        2348. Number of Zero-Filled Subarrays
 *        </a>
 */

class Solution {
  public long zeroFilledSubarray(int[] nums) {
    long res = 0, curr = 0;
    for (final int it : nums) {
      if (it == 0) {
        res += ++curr;
      } else {
        curr = 0;
      }
    }
    return res;
  }
} // Solution class
