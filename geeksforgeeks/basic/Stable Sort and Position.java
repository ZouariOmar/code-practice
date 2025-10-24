/**
 * Stable Sort and Position.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 20/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/stable-sort-and-position1359/1?page=1&sortBy=difficulty">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  public int getIndexInSortedArray(int[] arr, int k) {
    int res = 0;

    for (int i = 0, len = arr.length; i < len; ++i) {
      if (arr[i] < arr[k])
        ++res;
      if (arr[i] == arr[k] && i < k)
        ++res;
    }

    return res;
  }
} // Solution class
