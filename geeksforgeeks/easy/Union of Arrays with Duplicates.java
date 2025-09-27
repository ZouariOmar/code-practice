import java.util.ArrayList;
import java.util.HashSet;

/**
 * Union of Arrays with Duplicates.java
 *
 * GFG160
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 07/05/2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/hashing-gfg-160/problem/union-of-two-arrays3538
 */

class Solution {
  public static ArrayList<Integer> findUnion(int[] a, int[] b) {
    HashSet<Integer> set = new HashSet<>();
    for (final int i : a) {
      set.add(i);
    }
    for (final int i : b) {
      set.add(i);
    }
    return new ArrayList<>(set);
  }
} // Solution class
