/**
 * 832. Flipping an Image.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/09/2025
 *
 *        <a href="https://leetcode.com/problems/flipping-an-image">
 *        leetcode
 *        </a>
 */

class Solution {
  public int[][] flipAndInvertImage(int[][] image) {
    for (int i = 0, n = image.length; i < n; ++i) {
      int[] row = image[i];
      int l = 0, h = n - 1;
      while (l <= h) {
        int temp = row[l] ^ 1;
        row[l] = row[h] ^ 1;
        row[h] = temp;
        ++l;
        --h;
      }
    }
    return image;
  }
} // Solution class
