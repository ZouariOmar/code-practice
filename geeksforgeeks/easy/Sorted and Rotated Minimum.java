/**
 * @file Sorted and Rotated Minimum.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Sorted and Rotated Minimum.java file
 * @version 0.1
 * @date 2025-06-23
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/minimum-element-in-a-sorted-and-rotated-array3611
 *       geeksforgeeks @endlink
 */

class Solution {
  public int findMin(int[] arr) {
    int l = 0, h = arr.length - 1;
    while (l < h) {
      if (arr[l] < arr[h])
        return arr[l];
      int mid = (l + h) / 2;
      if (arr[mid] > arr[h])
        l = mid + 1;
      else
        h = mid;
    }
    return arr[l];
  }
} // Solution class
