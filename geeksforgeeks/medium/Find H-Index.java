/**
 * @file Find H-Index.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Find H-Index.java file
 * @version 0.1
 * @date 2025-06-26
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/sorting-gfg-160/problem/find-h-index--165609
 *       geeksforgeeks @endlink
 */

class Solution {
  public int hIndex(int[] citations) {
    int n = citations.length;
    int[] freq = new int[n + 1];
    for (final int it : citations) {
      if (it >= n)
        freq[n]++;
      else
        freq[it]++;
    }
    int idx = n, s = freq[n];
    while (s < idx)
      s += freq[--idx];
    return idx;
  }
} // Solution class
