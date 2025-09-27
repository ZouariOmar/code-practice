import java.util.Arrays;

/**
 * @file Count Pairs whose sum is less than target.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Count Pairs whose sum is less than target.java header file
 * @version 0.1
 * @date 2025-07-01
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/two-pointer-technique-gfg-160/problem/count-pairs-whose-sum-is-less-than-target
 *       geeksforgeeks ZouariOmar @endlink
 */

class Solution {
  int countPairs(int arr[], int target) {
    Arrays.sort(arr);
    int r = 0, l = arr.length - 1, res = 0;
    while (r < l) {
      if (arr[r] + arr[l] >= target) {
        --l;
      } else {
        res += l - r;
        ++r;
      }
    }
    return res;
  }
} // Solution class
