/**
 * @file Next Permutation.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Next Permutation.java header file
 * @version 0.1
 * @date 2025-06-13
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/next-permutation5226
 *       geeksforgeeks @endlink
 */

class Solution {
  void nextPermutation(int[] arr) {
    int len = arr.length, pivot = -1;
    for (int i = len - 2; i >= 0; i--) {
      if (arr[i] < arr[i + 1]) {
        pivot = i;
        break;
      }
    }

    if (pivot == -1) { // `arr` sorted in ascending oreder
      reverse(arr, 0, len - 1);
      return;
    }

    for (int i = len - 1; i > pivot; i--) {
      if (arr[i] > arr[pivot]) {
        swap(arr, i, pivot);
        break;
      }
    }

    reverse(arr, pivot + 1, len - 1);
  }

  private static void reverse(int[] arr, int left, int right) {
    while (left < right)
      swap(arr, left++, right--);
  }

  private static void swap(int[] arr, int left, int right) {
    arr[left] ^= arr[right];
    arr[right] ^= arr[left];
    arr[left] ^= arr[right];
  }
} // Solution class
