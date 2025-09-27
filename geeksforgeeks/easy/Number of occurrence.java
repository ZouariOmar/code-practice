/**
 * @file Number of occurrence.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Number of occurrence.java header file
 * @version 0.1
 * @date 2025-06-22
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/searching-gfg-160/problem/number-of-occurrence2259
 *       geeksforgeeks @endlink
 */

class Solution {
  int countFreq(int[] arr, int target) {
    int ans = arr.length, i = 0, j = ans - 1;
    do {
      if (arr[i] != target) {
        ans--;
        i++;
      }
      if (arr[j] != target) {
        ans--;
        j--;
      }
    } while ((arr[i] != target || arr[j] != target) && i <= j);
    return ans < 0 ? 0 : ans;
  }
} // Solution class
