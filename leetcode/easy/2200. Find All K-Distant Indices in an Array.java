
/**
 * @file 2200. Find All K-Distant Indices in an Array.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 2200. Find All K-Distant Indices in an Array.java file
 * @version 0.1
 * @date 2025-06-24
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-all-k-distant-indices-in-an-array
 *       leetcode @endlink
 */

import java.util.ArrayList;
import java.util.List;

class Solution {
  public List<Integer> findKDistantIndices(int[] nums, int key, int k) {
    List<Integer> res = new ArrayList<>();
    int r = 0, n = nums.length;
    for (int j = 0; j < n; ++j) {
      if (nums[j] == key) {
        int l = Math.max(r, j - k);
        r = Math.min(n - 1, j + k) + 1;
        for (int i = l; i < r; ++i) {
          res.add(i);
        }
      }
    }
    return res;
  }
} // Solution class
