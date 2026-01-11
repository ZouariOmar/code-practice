/**
 * 836. Rectangle Overlap.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/10/2025
 *
 *        <a href="https://leetcode.com/problems/rectangle-overlap">
 *        leetcode
 *        </a>
 */

class Solution {
  public boolean isRectangleOverlap(int[] rec1, int[] rec2) {
    return rec1[0] < rec2[2] && rec2[0] < rec1[2] && rec1[1] < rec2[3] && rec2[1] < rec1[3];
  }
} // Solution class
