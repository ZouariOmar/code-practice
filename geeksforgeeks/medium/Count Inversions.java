/**
 * Count Inversions.java
 *
 * GFG160
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 06/07/2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/inversion-of-array-1587115620
 */

class Solution {
  private static int countAndMerge(int[] arr, int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int[] left = new int[n1], right = new int[n2];
    for (int i = 0; i < n1; i++)
      left[i] = arr[i + l];
    for (int i = 0; i < n2; i++)
      right[i] = arr[m + i + 1];
    int res = 0, i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
      if (left[i] <= right[j])
        arr[k++] = left[i++];
      else {
        arr[k++] = right[j++];
        res += n1 - i;
      }
    }
    while (i < n1)
      arr[k++] = left[i++];
    while (j < n2)
      arr[k++] = right[j++];
    return res;
  }

  private static int countInv(int[] arr, int l, int r) {
    int res = 0;
    if (l < r) {
      int mid = (l + r) / 2;
      res += countInv(arr, l, mid);
      res += countInv(arr, mid + 1, r);
      res += countAndMerge(arr, l, mid, r);
    }
    return res;
  }

  static int inversionCount(int arr[]) {
    return countInv(arr, 0, arr.length - 1);
  }
}
