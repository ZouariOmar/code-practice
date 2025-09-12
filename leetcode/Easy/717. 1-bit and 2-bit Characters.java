/**
 * 717. 1-bit and 2-bit Characters.java
 *
 * leetcode
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 23/08/2025
 *        <a href="https://leetcode.com/problems/1-bit-and-2-bit-characters">
 *        717. 1-bit and 2-bit Characters
 *        </a>
 */

class Solution {
  public boolean isOneBitCharacter(int[] bits) {
    int tmp = 0;
    for (int len = bits.length, i = len - 2; i >= 0 && bits[i] == 1; --i) {
      ++tmp;
    }
    return (tmp & 1) == 0;
  }
} // Solution class
