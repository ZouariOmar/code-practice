
/**
 * 3487. Maximum Unique Subarray Sum After Deletion.java
 *
 * 3487 leetcode problem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 25/07/2025
 * @see https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion
 */

import java.util.HashSet;
import java.util.Set;

class Solution {
  public int maxSum(int[] nums) {
    int res = -101;
    for (final int num : nums) {
      res = Math.max(res, num);
    }
    if (res < 0)
      return res;
    Set<Integer> set = new HashSet<>();
    res = 0;
    for (final int num : nums) {
      if (!set.contains(num) && num > 0) {
        set.add(num);
        res += num;
      }
    }
    return res;
  }
} // Solution class
