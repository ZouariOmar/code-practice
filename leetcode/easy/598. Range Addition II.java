/**
 * @file 598. Range Addition II.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 598. Range Addition II.java header file
 * @version 0.1
 * @date 2025-06-11
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/range-addition-ii leetcode @endlink
 */

class Solution {
  public int maxCount(int m, int n, int[][] ops) {
    int minM = m, minN = n;
    for (final int[] op : ops) {
      minN = Math.min(minN, op[1]);
      minM = Math.min(minM, op[0]);
    }
    return minN * minM;
  }
} // Solution class
