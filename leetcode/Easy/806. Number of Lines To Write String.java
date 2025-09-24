/**
 * 806. Number of Lines To Write String.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 * 
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-09-21
 *
 *        <a href=
 *        "https://leetcode.com/problems/number-of-lines-to-write-string">
 *        leetcode
 *        </a>
 */

class Solution {
  public int[] numberOfLines(int[] widths, String s) {
    int[] res = new int[] { 1, 0 };
    for (final char c : s.toCharArray()) {
      int charPixels = widths[c - 'a'];
      if (res[1] + charPixels > 100) {
        res[1] = charPixels;
        ++res[0];
      } else {
        res[1] += charPixels;
      }
    }
    return res;
  }
} // Solution class
