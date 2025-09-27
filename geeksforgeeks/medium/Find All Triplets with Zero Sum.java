
/**
 * Find All Triplets with Zero Sum.java
 *
 * Find All Triplets with Zero Sum
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 03/07/2025
 */

import java.util.List;
import java.util.Map;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

class Solution {
  public List<List<Integer>> findTriplets(int[] arr) {
    Map<Integer, List<Integer>> map = new HashMap<>();
    List<List<Integer>> res = new ArrayList<>();
    for (int i = 0, len = arr.length; i < len; ++i) {
      for (int j = i + 1; j < len; ++j) {
        int val = -1 * (arr[j] + arr[i]);
        if (map.containsKey(val)) {
          for (int x : map.get(val)) {
            res.add(Arrays.asList(x, i, j));
          }
        }
      }
      map.putIfAbsent(arr[i], new ArrayList<>());
      map.get(arr[i]).add(i);
    }
    return res;
  }
} // Solution class // Solution class
