/**
 * 925. Long Pressed Name.java
 *
 * Easy leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2026-01-21
 *
 *        <a href="https://leetcode.com/problems/long-pressed-name">leetcode</a>
 */

class Solution {
  public boolean isLongPressedName(String name, String typed) {
    int i = 0, n = name.length(), m = typed.length();

    for (int j = 0; j < m; ++j) {
      if (i < n && name.charAt(i) == typed.charAt(j)) {
        ++i;
      } else if (j == 0 || typed.charAt(j) != typed.charAt(j - 1)) {
        return false;
      }
    }

    return i == n;
  }
} // Solution class
