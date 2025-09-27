/**
 * Rotate by 90 degree.java
 *
 * GFG160
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 09/07/2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/matrix-gfg-160/problem/rotate-by-90-degree-1587115621
 */

class Solution {
  public void rotateMatrix(int[][] mat) {
    int n = mat.length;
    for (int i = 0; i < n / 2; ++i) {
      for (int j = i; j < n - i - 1; ++j) {
        int tmp = mat[i][j];
        mat[i][j] = mat[j][n - i - 1];
        mat[j][n - i - 1] = mat[n - i - 1][n - j - 1];
        mat[n - i - 1][n - j - 1] = mat[n - j - 1][i];
        mat[n - j - 1][i] = tmp;
      }
    }
  }
} // Solution class
