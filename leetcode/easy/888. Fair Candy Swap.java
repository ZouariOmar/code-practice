/**
 * 888. Fair Candy Swap.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 11/05/2025
 *
 *        <a href="https://leetcode.com/problems/fair-candy-swap">leetcode</a>
 */

class Solution {
  public int[] fairCandySwap(int[] aliceSizes, int[] bobSizes) {
    int aliceSum = 0, bobSum = 0, result[] = new int[2];
    boolean[] check = new boolean[100001];

    for (final int num : aliceSizes)
      aliceSum += num;

    for (final int num : bobSizes) {
      bobSum += num;
      check[num] = true;
    }

    int targetDiff = (bobSum - aliceSum) / 2;
    for (final int num : aliceSizes) {
      int bobBox = num + targetDiff;
      if (bobBox > 0 && bobBox < 100001 && check[bobBox])
        return new int[] { num, bobBox };
    }

    return result;
  }
} // Solution class
