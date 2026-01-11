/**
 * 867. Transpose Matrix.java
 *
 * Leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/18/2025
 *
 *        <a href="https://leetcode.com/problems/transpose-matrix">
 *        leetcode
 *        </a>
 */

class Solution {
  public int[][] transpose(int[][] matrix) {
    int rows = matrix.length, cols = matrix[0].length;
    int[][] res = new int[cols][rows];
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        res[j][i] = matrix[i][j];
      }
    }
    return res;
  }
} // Solution class
