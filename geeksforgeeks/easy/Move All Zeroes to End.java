
/**
 * @file Move All Zeroes to End.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Move All Zeroes to End.java file
 * @version 0.1
 * @date 2025-06-09
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751
 *       geeksforgeeks @endlink
 */

class Solution {
  private static void swap(int[] arr, int index0, int index1) {
    arr[index0] ^= arr[index1];
    arr[index1] ^= arr[index0];
    arr[index0] ^= arr[index1];
  }

  void pushZerosToEnd(int[] arr) {
    for (int i = 0, j = 0, len = arr.length; i < len; i++) {
      if (arr[j] != 0)
        j++;
      else if (arr[i] != 0)
        swap(arr, i, j++);
    }
  }
} // Solution class
