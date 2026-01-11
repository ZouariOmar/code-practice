
/**
 * @file 2616. Minimize the Maximum Difference of Pairs.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 2616. Minimize the Maximum Difference of Pairs.java file
 * @version 0.1
 * @date 2025-06-13
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/minimize-the-maximum-difference-of-pairs
 *       leetcode @endlink
 */

import java.util.Arrays;

class Solution {
  public int minimizeMax(int[] nums, int p) {
    Arrays.sort(nums);
    int len = nums.length, left = 0, right = nums[len - 1] - nums[0];
    while (left < right) {
      int mid = (left + right) / 2, pairs = 0;
      for (int i = 1; i < len; ++i) {
        if (nums[i] - nums[i - 1] <= mid) {
          pairs++;
          i++;
        }
      }
      if (pairs >= p)
        right = mid;
      else
        left = mid + 1;
    }
    return left;
  }
} // Solution class
