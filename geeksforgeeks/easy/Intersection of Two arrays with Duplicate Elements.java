import java.util.ArrayList;
import java.util.HashSet;

/**
 * Intersection of Two arrays with Duplicate Elements.java
 *
 * GFG160
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 04/07/2025
 */

class Solution {
  public ArrayList<Integer> intersectionWithDuplicates(int[] a, int[] b) {
    HashSet<Integer> set = new HashSet<>();
    for (final int i : a) {
      set.add(i);
    }
    ArrayList<Integer> ans = new ArrayList<>();
    for (final int i : b) {
      if (set.contains(i)) {
        ans.add(i);
        set.remove(i);
      }
    }
    return ans;
  }
} // Solution class
