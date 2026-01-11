import java.util.List;

/**
 * 120. Triangle.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 09/25/2025
 *        <a href="https://leetcode.com/problems/triangle" >
 *        leetcode
 *        </a>
 */

class Solution {
  public int minimumTotal(List<List<Integer>> triangle) {
    int row = triangle.size();
    int[] memo = new int[row];

    for (int i = 0; i < row; i++) {
      memo[i] = triangle.get(row - 1).get(i);
    }

    for (int r = row - 2; r >= 0; r--) {
      for (int c = 0; c <= r; c++) {
        memo[c] = Math.min(memo[c], memo[c + 1]) + triangle.get(r).get(c);
      }
    }

    return memo[0];
  }
} // Solution class
