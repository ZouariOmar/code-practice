import java.util.HashMap;

/**
 * @file Count pairs with given sum.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Count pairs with given sum.java file
 * @version 0.1
 * @date 2025-06-25
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/hashing-gfg-160/problem/count-pairs-with-given-sum--150253
 *       geeksforgeeks @endlink
 */

class Solution {
  int countPairs(int arr[], int target) {
    HashMap<Integer, Integer> map = new HashMap<>();
    int res = 0;
    for (final int it : arr) {
      map.put(it, map.getOrDefault(it, 0) + 1);
      if (map.containsKey(target - it))
        res += map.get(target - it);
    }
    return res;

  }
} // Solution class
