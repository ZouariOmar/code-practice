/**
 * 771. Jewels and Stones.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 19/09/2025
 *        <a href="https://leetcode.com/problems/jewels-and-stones">
 *        leetcode
 *        </a>
 */

class Solution {
  public int numJewelsInStones(String jewels, String stones) {
    int count = 0;
    for (final char ch : stones.toCharArray()) {
      if (jewels.indexOf(ch) != -1) {
        ++count;
      }
    }
    return count;
  }
} // Solution class
