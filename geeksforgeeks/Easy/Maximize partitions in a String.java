/**
 * Maximize partitions in a String.java
 *
 * GFG160
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 09/11/2025
 *        <a href=
 *        "https://www.geeksforgeeks.org/batch/gfg-160-problems/track/greedy-gfg-160/problem/maximize-partitions-in-a-string">
 *        Maximize partitions in a String
 *        </a>
 */

class Solution {
  public int maxPartitions(String s) {
    int[] last = new int[26];
    for (int i = 0; i < s.length(); ++i)
      last[s.charAt(i) - 'a'] = i;

    int end = 0, count = 0;
    for (int i = 0; i < s.length(); ++i) {
      end = Math.max(end, last[s.charAt(i) - 'a']);
      if (end == i)
        ++count;
    }
    return count;
  }
}
