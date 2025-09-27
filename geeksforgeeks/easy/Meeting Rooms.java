import java.util.Arrays;

/**
 * Meeting Rooms.java
 *
 * GFG160
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 16/08/2025
 *        <a href=
 *        "https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-bonus-problems/problem/attend-all-meetings">
 *        Meeting Rooms
 *        </a>
 */

class Solution {
  static boolean canAttend(int[][] arr) {
    Arrays.sort(arr, (a, b) -> Integer.compare(a[0], b[0]));
    for (int i = 0, len = arr.length; i < len - 1; ++i) {
      if (arr[i][1] > arr[i + 1][0]) {
        return false;
      }
    }
    return true;
  }
} // Solution class
