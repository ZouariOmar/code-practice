/**
 * K-th element of two Arrays.java
 *
 * GFG160
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 21/07/2025
 * @see https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/k-th-element-of-two-sorted-array1317
 */

class Solution {
  public int kthElement(int a[], int b[], int k) {
    int i = 0, j = 0,
        last = 0,
        n = a.length, m = b.length;
    for (int d = 0; d < k; ++d) {
      if (i < n) {
        if (j < m && a[i] > b[j]) {
          last = b[j++];
        } else {
          last = a[i++];
        }
      } else if (j < m) {
        last = b[j++];
      }
    }
    return last;
  }
} // Solution class
