/**
 * 812. Largest Triangle Area.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 24/09/2025
 *
 *        <a href="https://leetcode.com/problems/largest-triangle-area">
 *        leetcode
 *        </a>
 */

class Solution {
  public double largestTriangleArea(int[][] points) {
    double area = 0;
    for (int i = 0; i < points.length; ++i) {
      for (int j = i + 1; j < points.length; ++j) {
        for (int j2 = j + 1; j2 < points.length; ++j2) {
          area = Math.max(area, 0.5 * Math.abs(
              points[i][0] * (points[j][1] - points[j2][1]) +
                  points[j][0] * (points[j2][1] - points[i][1]) +
                  points[j2][0] * (points[i][1] - points[j][1])));
        }
      }
    }
    return area;
  }
} // Solution class
