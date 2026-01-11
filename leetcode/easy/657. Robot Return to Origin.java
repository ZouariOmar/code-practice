/**
 * 657. Robot Return to Origin.java
 *
 * 657. Robot Return to Origin leetcode problem
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 08/07/2025
 * @link https://leetcode.com/problems/robot-return-to-origin leetcode
 */

class Solution {
  public boolean judgeCircle(String moves) {
    int[] array = new int[26];
    for (char ch : moves.toCharArray())
      array[ch - 'A']++;
    return (array['L' - 'A'] == array['R' - 'A'] && array['U' - 'A'] == array['D' - 'A']);
  }
} // Solution class
