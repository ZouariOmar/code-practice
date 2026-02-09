import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

/**
 * 1200. Minimum Absolute Difference.java
 *
 * Easy leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2026-01-26
 *
 *        <a href=
 *        "https://leetcode.com/problems/minimum-absolute-difference">leetcode</a>
 */

class Solution {
  public List<List<Integer>> minimumAbsDifference(int[] arr) {
    List<List<Integer>> res = new ArrayList<>();
    Arrays.sort(arr);
    int min = Integer.MAX_VALUE;
    for (int i = 0, len = arr.length; i < len - 1; ++i) {
      int diff = arr[i + 1] - arr[i];
      if (min > diff) {
        res = new ArrayList<>();
        res.add(Arrays.asList(arr[i], arr[i + 1]));
        min = diff;
      } else if (diff == min)
        res.add(Arrays.asList(arr[i], arr[i + 1]));
    }
    return res;
  }
} // Solution class
