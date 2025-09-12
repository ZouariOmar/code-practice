import java.util.Arrays;

/**
 * 3025. Find the Number of Ways to Place People I.java
 *
 * leetcode problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 09/02/2025
 *        <a href=
 *        "https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i">
 *        3025. Find the Number of Ways to Place People I
 *        </a>
 */

class Solution {
  public int numberOfPairs(int[][] points) {
    Arrays.sort(points, (p, q) -> {
      return p[0] == q[0] ? Integer.compare(p[1], q[1]) : Integer.compare(q[0], p[0]);
    });
    int n = points.length, ans = 0;
    for (int i = 0; i < n - 1; i++) {
      int y = Integer.MAX_VALUE;
      for (int j = i + 1; j < n; j++) {
        if (points[j][1] >= points[i][1] && y > points[j][1]) {
          ans++;
          y = points[j][1];
        }
      }
    }
    return ans;
  }
} // Solution class
