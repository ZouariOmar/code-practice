/**
 * 696. Count Binary Substrings.java
 *
 * 696. Count Binary Substrings leetcode problem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 20/07/2025
 * @see https://leetcode.com/problems/count-binary-substrings
 */

class Solution {
  public int countBinarySubstrings(String s) {
    int ans = 0, pre = 0, cur = 1;
    for (int i = 1, len = s.length(); i < len; ++i) {
      if (s.charAt(i - 1) == s.charAt(i)) {
        ++cur;
      } else {
        ans += Math.min(pre, cur);
        pre = cur;
        cur = 1;
      }
    }
    return ans + Math.min(pre, cur);
  }
} // Solution class
