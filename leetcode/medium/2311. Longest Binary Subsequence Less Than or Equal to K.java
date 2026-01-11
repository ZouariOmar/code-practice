/**
 * @file 2311. Longest Binary Subsequence Less Than or Equal to K.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 2311. Longest Binary Subsequence Less Than or Equal to K.java file
 * @version 0.1
 * @date 2025-06-26
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/longest-binary-subsequence-less-than-or-equal-to-k
 *       leetcode @endlink
 */

class Solution {
  public int longestSubsequence(String s, int k) {
    int sum = 0, length = 0,
        maxBits = (int) (Math.log(k) / Math.log(2)) + 1;
    for (int i = 0, len = s.length(); i < len; i++) {
      char bit = s.charAt(len - 1 - i);
      if (bit == '1') {
        if (i < maxBits && sum + (1 << i) <= k) {
          sum += 1 << i;
          length++;
        }
      } else {
        length++;
      }
    }

    return length;
  }
} // Solution class
