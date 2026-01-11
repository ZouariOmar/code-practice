
/**
 * @file 628. Maximum Product of Three Numbers.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 628. Maximum Product of Three Numbers.java file
 * @version 0.1
 * @date 2025-06-23
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-product-of-three-numbers
 *       leetcode @endlink
 */

import java.util.Arrays;

class Solution {
  public int maximumProduct(int[] nums) {
    Arrays.sort(nums);
    int len = nums.length;
    return Integer.max(nums[len - 1] * nums[len - 2] * nums[len - 3], nums[0] * nums[1] * nums[len - 1]);
  }
} // Solution class
