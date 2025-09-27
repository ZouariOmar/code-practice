/**
 * @file Reverse an Array.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Reverse an Array.java header file
 * @version 0.1
 * @date 2025-06-10
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/reverse-an-array
 *       geeksforgeeks @endlink
 */

class Solution {
  public void reverseArray(int arr[]) {
    int l = 0, h = arr.length - 1;
    while (l < h) {
      arr[l] ^= arr[h];
      arr[h] ^= arr[l];
      arr[l] ^= arr[h];
      l++;
      h--;
    }
  }
} // Solution class
