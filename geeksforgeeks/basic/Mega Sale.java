import java.util.Arrays;

/**
 * Mega Sale.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 11/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/mega-sale1431/1?page=1&sortBy=difficulty">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  public int maxProfit(int m, int[] arr) {
    Arrays.sort(arr);
    int res = 0;
    for (int i = 0, n = Math.min(arr.length, m); i < n; ++i) {
      if (arr[i] > 0)
        break;
      res += arr[i];
    }
    return -res;
  }
} // Solution class
