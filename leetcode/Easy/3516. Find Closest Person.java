/**
 * 3516. Find Closest Person.java
 *
 * leetcode
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 04/09/2025
 *        <a href="https://leetcode.com/problems/find-closest-person">
 *        leetcode
 *        </a>
 */

class Solution {
  public int findClosest(int x, int y, int z) {
    int res = Math.abs(z - x) - Math.abs(z - y);
    if (res > 0)
      return 2;
    else if (res < 0)
      return 1;
    return 0;
  }
} // Solution class
