/**
 * Search in Rotated Sorted Array.java
 *
 * GFG160
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 20/07/2025
 * @see https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/search-in-a-rotated-array4618
 */

class Solution {
  int search(int[] arr, int key) {
    int l = 0, h = arr.length - 1;
    while (l <= h) {
      int mid = (l + h) / 2;
      if (arr[mid] == key)
        return mid;
      if (arr[mid] >= arr[l]) {
        if (key >= arr[l] && key < arr[mid]) {
          h = mid - 1;
        } else {
          l = mid + 1;
        }
      } else {
        if (key <= arr[h] && key > arr[mid]) {
          l = mid + 1;
        } else {
          h = mid - 1;
        }
      }
    }
    return -1;
  }
} // Solution class
