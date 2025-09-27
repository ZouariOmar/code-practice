/**
 * @file Sort 0s, 1s and 2s.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Sort 0s, 1s and 2s.java header file
 * @version 0.1
 * @date 2025-06-16
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/sort-an-array-of-0s-1s-and-2s4231
 *       geeksforgeeks @endlink
 */

class Solution {

  /**
   * @brief Swap `arr[l]` and `arr[h]`
   *
   * @param arr {int[]}
   * @param l   int
   * @param h   int
   *
   * @return void
   */
  private static void swap(int[] arr, int l, int h) {
    if (l == h)
      return;
    arr[l] ^= arr[h];
    arr[h] ^= arr[l];
    arr[l] ^= arr[h];
  }

  /**
   * @brief Function to sort an array of 0s, 1s, and 2s
   *
   * @param arr {int[]}
   *
   * @return void
   */
  public void sort012(int[] arr) {
    int len = arr.length, l = 0, h = len - 1, mid = 0;
    while (mid <= h) {
      if (arr[mid] == 0) {
        swap(arr, mid, l);
        l++;
        mid++;
      } else if (arr[mid] == 1) {
        mid++;
      } else { // arr[mid] == 2
        swap(arr, mid, h);
        h--;
      }
    }
  }
} // Solution class
