/**
 * 3195. Find the Minimum Area to Cover All Ones I.java
 *
 * leetcode probelem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 22/08/2025
 * 
 *        <a href=
 *        "https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/description/?envType=daily-question&envId=2025-08-22">
 *        3195. Find the Minimum Area to Cover All Ones I
 *        </a>
 */

class Solution {
  private final static boolean isOne(int[] arr) {
    for (final int it : arr) {
      if (it == 1)
        return true;
    }
    return false;
  }

  private final static boolean isOne(int[][] grid, int j, int length) {
    for (int i = 0; i < length; ++i) {
      if (grid[i][j] == 1) {
        return true;
      }
    }
    return false;
  }

  public int minimumArea(int[][] grid) {
    int width = grid[0].length,
        length = grid.length,
        direction[] = new int[4]; // left - top - right - bottom

    // Find top
    direction[1] = -1;
    while (!isOne(grid[++direction[1]]))
      ;

    // Find bottom
    direction[3] = length;
    while (!isOne(grid[--direction[3]]))
      ;

    // Find left
    direction[0] = -1;
    while (!isOne(grid, ++direction[0], length))
      ;

    // Find right
    direction[2] = width;
    while (!isOne(grid, --direction[2], length))
      ;

    return (direction[3] - direction[1] + 1) * (direction[2] - direction[0] + 1);
  }
} // Solution class
