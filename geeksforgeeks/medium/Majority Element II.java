import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

/**
 * @file Majority Element II.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Majority Element II.java header file
 * @version 0.1
 * @date 2025-06-28
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/majority-vote
 *       geeksforgeeks @endlink
 */

class Solution {
  public ArrayList<Integer> findMajority(int[] arr) {
    int n = arr.length;

    Map<Integer, Integer> map = new HashMap<>();
    for (final int i : arr)
      map.put(i, map.getOrDefault(i, 0) + 1);

    System.out.println(map);
    ArrayList<Integer> res = new ArrayList<>();
    map.forEach((key, value) -> {
      if (value > n / 3)
        res.add(key);
    });

    if (res.size() == 2 && res.get(0) > res.get(1)) {
      int temp = res.get(0);
      res.set(0, res.get(1));
      res.set(1, temp);
    }

    return res;
  }
} // Solution class
