/**
 * @file 1432. Max Difference You Can Get From Changing an Integer.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 1432. Max Difference You Can Get From Changing an Integer.java header
 *        file
 * @version 0.1
 * @date 2025-06-15
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/max-difference-you-can-get-from-changing-an-integer
 *       leetcode @endlink
 */

class Solution {
  public int maxDiff(int num) {
    String s = Integer.toString(num), a = "", b;
    char c = 0;
    for (final char ch : s.toCharArray()) {
      if (ch != '9') {
        c = ch;
        a = s;
        break;
      }
    }
    a = (!a.isEmpty()) ? a.replace(c, '9') : s;
    if (s.charAt(0) != '1') {
      b = s.replace(s.charAt(0), '1');
    } else {
      b = s;
      for (int i = 1; i < s.length(); ++i) {
        char ch = s.charAt(i);
        if (ch != '0' && ch != '1') {
          b = b.replace(ch, '0');
          break;
        }
      }
    }
    return Integer.parseInt(a) - Integer.parseInt(b);
  }
} // Solution class
