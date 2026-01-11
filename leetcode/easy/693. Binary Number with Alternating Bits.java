/**
 * 693. Binary Number with Alternating Bits.java
 *
 * 693. Binary Number with Alternating Bits leetcode problem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 18/07/2025
 * @see https://leetcode.com/problems/binary-number-with-alternating-bits
 */

class Solution {
  public boolean hasAlternatingBits(int n) {
    int x = n ^ (n >> 1);
    return (x & (x + 1)) == 0;
  }
} // Solution class
