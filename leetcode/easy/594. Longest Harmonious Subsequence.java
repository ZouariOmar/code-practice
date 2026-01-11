
/**
 * @file 594. Longest Harmonious Subsequence.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 594. Longest Harmonious Subsequence.java file
 * @version 0.1
 * @date 2025-06-09
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/longest-harmonious-subsequence
 *       leetcode @endlink
 */

import java.util.HashMap;
import java.util.Map;

class Solution {
  public int findLHS(int[] nums) {
    HashMap<Integer, Integer> mp = new HashMap<>();
    for (final int it : nums)
      mp.put(it, mp.getOrDefault(it, 0) + 1);
    int result = 0;
    for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
      int key = entry.getKey();
      int value = entry.getValue();
      Integer less = mp.get(key - 1);
      Integer more = mp.get(key + 1);
      if (less != null)
        result = Math.max(result, value + less);
      if (more != null)
        result = Math.max(result, value + more);
    }
    return result;
  }
} // Solution class
