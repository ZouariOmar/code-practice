
/**
 * 1865. Finding Pairs With a Certain Sum.java
 *
 * 1865. Finding Pairs With a Certain Sum leetcode problem
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 06/07/2025
 * @link https://leetcode.com/problems/finding-pairs-with-a-certain-sum
 */

import java.util.Map;
import java.util.HashMap;

class FindSumPairs {
  private int[] n1, n2;
  private Map<Integer, Integer> m = new HashMap<>();

  public FindSumPairs(int[] nums1, int[] nums2) {
    n1 = nums1;
    n2 = nums2;
    for (final int x : n2)
      m.put(x, m.getOrDefault(x, 0) + 1);
  }

  public void add(int index, int val) {
    m.put(n2[index], m.get(n2[index]) - 1);
    n2[index] += val;
    m.put(n2[index], m.getOrDefault(n2[index], 0) + 1);
  }

  public int count(int tot) {
    int c = 0;
    for (final int i : n1) {
      c += m.getOrDefault(tot - i, 0);
    }
    return c;
  }
} // FindSumPairs class
