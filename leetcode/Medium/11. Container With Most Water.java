/**
 * 11. Container With Most Water.java
 *
 * none
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/04/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/container-with-most-water/description/?envType=daily-question&envId=2025-10-04">
 *        11. Container With Most Water
 *        </a>
 */

class Solution {
  public int maxArea(int[] height) {
    int l = 0, r = height.length - 1;
    int maxArea = 0;

    while (l < r) {
      int minHeight = Math.min(height[l], height[r]);
      int width = r - l;
      maxArea = Math.max(maxArea, minHeight * width);

      while (l < r && height[l] <= minHeight)
        ++l;

      while (l < r && height[r] <= minHeight)
        --r;
    }

    return maxArea;
  }
} // Solution class
