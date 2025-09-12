/**
 * 1277. Count Square Submatrices with All Ones.java
 *
 * leetcode problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 20/08/2025
 *        <a href=
 *        "https://leetcode.com/problems/count-square-submatrices-with-all-ones">
 *        leetcode
 *        </a>
 */

class Solution {
  public int countSquares(int[][] matrix) {
    int res = 0, cols = matrix[0].length;
    for (int i = 0, rows = matrix.length; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        if (matrix[i][j] == 1 && i > 0 && j > 0) {
          matrix[i][j] = Math.min(matrix[i - 1][j - 1], Math.min(matrix[i][j - 1], matrix[i - 1][j])) + 1;
        }
        res += matrix[i][j];
      }
    }
    return res;
  }
} // Solution class
