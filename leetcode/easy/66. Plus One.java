/**
 * 66. Plus One.java
 *
 * Easy leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 01/01/2026
 *
 *        <a href="https://leetcode.com/problems/plus-one">leetcode</a>
 */

class Solution {
  public int[] plusOne(int[] digits) {
    byte n = (byte) digits.length;
    for (byte i = (byte) (n - 1); i >= 0; --i) {
      ++digits[i];

      if (digits[i] != 10)
        return digits;

      digits[i] = 0;
    }

    digits = new int[n + 1];
    digits[0] = 1;
    return digits;
  }
} // Solution class
