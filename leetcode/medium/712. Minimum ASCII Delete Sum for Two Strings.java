/**
 * 712. Minimum ASCII Delete Sum for Two Strings.java
 *
 * Leetcode meduim problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/01/2026
 *
 *        <a href=
 *        "https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings">leetcode</a>
 */

class Solution {
  public int minimumDeleteSum(String s1, String s2) {
    int m = s1.length(), n = s2.length();
    int[][] dp = new int[m + 1][n + 1];

    for (int i = m - 1; i >= 0; --i) {
      for (int j = n - 1; j >= 0; --j) {
        dp[i][j] = s1.charAt(i) == s2.charAt(j)
            ? s1.charAt(i) + dp[i + 1][j + 1]
            : Math.max(dp[i + 1][j], dp[i][j + 1]);
      }
    }

    int total = 0;

    for (final char c : s1.toCharArray())
      total += c;

    for (final char c : s2.toCharArray())
      total += c;

    return total - 2 * dp[0][0];
  }
} // Solution class
