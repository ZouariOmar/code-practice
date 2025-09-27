/**
 * @file Rotate Array.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Rotate Array.java header file
 * @version 0.1
 * @date 2025-06-10
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/rotate-array-by-n-elements-1587115621
 *       geeksforgeeks @endlink
 */

class Solution {
  /**
   * @brief Function to rotate an array by d elements in counter-clockwise
   *        direction
   *
   * @param arr {int[]}
   * @param d   {int}
   *
   * @return void
   */
  static void rotateArr(int[] arr, int d) {
    int n = arr.length;
    d %= n; // Handle the case where d > size of array
    rotateArray(arr, 0, d - 1);
    rotateArray(arr, d, n - 1);
    rotateArray(arr, 0, n - 1);
  }

  /**
   * @brief Rotate `arr` from `l` to `h`
   *
   * @param arr {int[]}
   * @param l   {int}
   * @param h   {int}
   *
   * @return void
   */
  private static void rotateArray(int[] arr, int l, int h) {
    while (l < h) {
      arr[l] ^= arr[h];
      arr[h] ^= arr[l];
      arr[l] ^= arr[h];
      l++;
      h--;
    }
  }
}
