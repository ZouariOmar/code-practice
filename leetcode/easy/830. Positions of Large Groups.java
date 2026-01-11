import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * 830. Positions of Large Groups.java
 *
 * none
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-10-08
 *
 *        <a href="https://leetcode.com/problems/positions-of-large-groups">
 *        leetcode
 *        </a>
 */

class Solution {
  public List<List<Integer>> largeGroupPositions(String s) {
    List<List<Integer>> res = new ArrayList<>();
    int idx = 0;
    for (int i = 0, n = s.length(); i < n; ++i) {
      if (i == n - 1 || s.charAt(i) != s.charAt(i + 1)) {
        if (i - idx > 1)
          res.add(Arrays.asList(idx, i));
        idx = i + 1;
      }
    }
    return res;
  }
} // Solution class
