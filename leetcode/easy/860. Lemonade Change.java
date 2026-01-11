/**
 * 860. Lemonade Change.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-10-17
 *
 *        <a href="https://leetcode.com/problems/lemonade-change">
 *        leetcode
 *        </a>
 */

class Solution {
  public boolean lemonadeChange(int[] bills) {
    int fiveDollars = 0, tenDollars = 0;

    for (int x : bills) {
      if (x == 5) {
        ++fiveDollars;

      } else if (x == 10) {
        if (fiveDollars == 0)
          return false;
        --fiveDollars;
        ++tenDollars;

      } else {
        if (fiveDollars > 0 && tenDollars > 0) {
          --fiveDollars;
          --tenDollars;
        } else if (fiveDollars > 2) {
          fiveDollars -= 3;
        } else {
          return false;
        }
      }
    }

    return true;
  }
} // Solution class
