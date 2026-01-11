/**
 * 1957. Delete Characters to Make Fancy String.java
 *
 * 1957. Delete Characters to Make Fancy String leetcode problem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 21/07/2025
 * @see https://leetcode.com/problems/delete-characters-to-make-fancy-string
 */

class Solution {
  public String makeFancyString(String s) {
    int len = s.length();
    if (len < 3)
      return s;

    StringBuilder ans = new StringBuilder(s.substring(0, 2));
    for (int i = 2; i < len; ++i) {
      char c = s.charAt(i);
      if (s.charAt(i - 2) == c && s.charAt(i - 1) == c)
        continue;
      ans.append(c);
    }

    return ans.toString();
  }
} // Solution class
