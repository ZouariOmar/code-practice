/**
 * 2125. Number of Laser Beams in a Bank.java
 *
 * Leetcode meduim problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 27/10/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/number-of-laser-beams-in-a-bank">leetcode</a>
 */

class Solution {
  private int countActiveDevices(String layer) {
    int l = 0;
    for (final char device : layer.toCharArray()) {
      l += device - '0';
    }
    return l;
  }

  public int numberOfBeams(String[] bank) {
    int res = 0, l0 = 0, l1 = 0, i = 0, n = bank.length;

    while (l0 == 0 && i < n)
      l0 = countActiveDevices(bank[i++]);

    for (; i < n; ++i) {
      if (l1 == 0)
        l1 = countActiveDevices(bank[i]);
      if (l0 != 0 && l1 != 0) {
        res += l0 * l1;
        l0 = l1;
        l1 = 0;
      }
    }
    return res;
  }
} // Solution class
