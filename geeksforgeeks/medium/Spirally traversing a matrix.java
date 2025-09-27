import java.util.ArrayList;

/**
 * Spirally traversing a matrix.java
 *
 * GFG160
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 08/07/2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/matrix-gfg-160/problem/spirally-traversing-a-matrix-1587115621
 */

class Solution {
  public ArrayList<Integer> spirallyTraverse(int[][] mat) {
    int left = 0, right = mat[0].length - 1, top = 0, bottom = mat.length - 1;
    ArrayList<Integer> res = new ArrayList<>();

    while (left <= right && top <= bottom) {
      for (int i = left; i <= right; ++i) {
        res.add(mat[top][i]);
      }
      ++top;

      for (int i = top; i <= bottom; ++i) {
        res.add(mat[i][right]);
      }
      --right;

      if (top <= bottom) {
        for (int i = right; i >= left; --i) {
          res.add(mat[bottom][i]);
        }
        --bottom;
      }
      if (left <= right) {
        for (int i = bottom; i >= top; --i) {
          res.add(mat[i][left]);
        }
        ++left;
      }
    }

    return res;
  }
} // Solution class
