import java.util.List;

/**
 * Sum Array Puzzle.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/26/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/sum-array-puzzle/1?page=1&sortBy=difficulty">geeksforgeeks</a>
 */

class Solution {
  public void sumArray(List<Integer> arr) {
    int sum = 0;
    for (final int it : arr)
      sum += it;
    for (int i = 0, n = arr.size(); i < n; ++i) {
      arr.set(i, sum - arr.get(i));
    }
  }
} // Solution class
