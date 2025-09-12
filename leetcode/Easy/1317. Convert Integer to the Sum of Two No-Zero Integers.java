/**
 * 1317. Convert Integer to the Sum of Two No-Zero Integers.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 08/09/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers">
 *        leetcode
 *        </a>
 */

class Solution {
  public int[] getNoZeroIntegers(int n) {
    for (int i = 1; i < n; ++i) {
      int j = n - i;
      if (!String.valueOf(i).contains("0") && !String.valueOf(j).contains("0")) {
        return new int[] { i, j };
      }
    }
    return new int[0];
  }
} // Solution class
