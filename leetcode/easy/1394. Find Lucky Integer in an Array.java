/**
 * 1394. Find Lucky Integer in an Array.java
 *
 * 1394. Find Lucky Integer in an Array leetcode problem
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 2025-07-05
 * @link https://leetcode.com/problems/find-lucky-integer-in-an-array/description/?envType=daily-question&envId=2025-07-05
 */

class Solution {
  public int findLucky(int[] arr) {
    int[] obeme = new int[501];

    for (int el : arr) {
      obeme[el] += 1;
    }

    for (int i = 500; i > 0; i--) {
      if (i == obeme[i])
        return i;
    }

    return -1;
  }
} // Solution class
