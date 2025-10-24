/**
 * 868. Binary Gap.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/19/2025
 *
 *        <a href="https://leetcode.com/problems/binary-gap">
 *        leetcode
 *        </a>
 */

class Solution {
  public int binaryGap(int n) {
    int last = 0, result = 0;

    while (((n >> last) & 1) == 0)
      ++last;

    for (int i = last + 1; i < 32; i++) {
      if (((n >> i) & 1) == 1) {
        result = Math.max(result, i - last);
        last = i;
      }
    }

    return result;
  }
} // Solution class
