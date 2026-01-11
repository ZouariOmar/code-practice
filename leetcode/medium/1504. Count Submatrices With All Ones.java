/**
 * 1504. Count Submatrices With All Ones.java
 *
 * leetcode problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 21/08/2025
 *        <a href=
 *        "https://leetcode.com/problems/count-submatrices-with-all-ones">
 *        leetcode
 *        </a>
 */

class Solution {
  public int numSubmat(int[][] mat) {
    int rows = mat.length, cols = mat[0].length;
    int[][] cache = new int[rows][cols];
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        if (mat[i][j] == 0)
          continue;
        cache[i][j] = (j == 0 ? 0 : cache[i][j - 1]) + 1;
      }
    }
    int res = 0;
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        int m = cache[i][j];
        for (int k = i; k >= 0 && m > 0; --k) {
          m = Math.min(m, cache[k][j]);
          res += m;
        }
      }
    }
    return res;
  }
} // Solution class
