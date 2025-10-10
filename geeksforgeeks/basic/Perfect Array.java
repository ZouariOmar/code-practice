/**
 * Perfect Array.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-10-03
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/perfect-array2344/1?page=2&sortBy=difficulty">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  public boolean isPerfect(int[] arr) {
    int i = 0, n = arr.length;

    if (n < 3)
      return false;

    while (i < n - 1 && arr[i] < arr[i + 1])
      ++i;

    while (i < n - 1 && arr[i] == arr[i + 1])
      ++i;

    while (i < n - 1 && arr[i] > arr[i + 1])
      ++i;

    return i + 1 == n;

  }
} // Solution class
