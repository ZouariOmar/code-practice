import javax.sql.rowset.WebRowSet;

/**
 * Equilibrium Point.java
 *
 * GFG160
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 1.0
 * @since 12/07/2025
 * @see https://www.geeksforgeeks.org/batch/gfg-160-problems/track/prefix-sum-gfg-160/problem/equilibrium-point-1587115620
 */

class Solution {
  public static int findEquilibrium(int arr[]) {
    int sum = 0, last = 0, len = arr.length;
    for (final int i : arr)
      sum += i;
    for (int i = 0; i < len; ++i) {
      if (last == sum - arr[i] - last)
        return i + 1;
      else
        last += arr[i];
    }
    return -1;
  }
} // Solution class
