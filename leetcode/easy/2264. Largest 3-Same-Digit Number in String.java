/**
 * 2264. Largest 3-Same-Digit Number in String.java
 *
 * leetcode problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 14/08/2025
 *        <a href=
 *        "https://leetcode.com/problems/largest-3-same-digit-number-in-string"
 *        target="_blank">leetcode</a>
 */

class Solution {
  public String largestGoodInteger(String num) {
    for (char n = '9'; n >= '0'; --n) {
      String s = new String(new char[] { n, n, n });
      if (num.contains(s))
        return s;
    }
    return "";
  }
} // Solution class
