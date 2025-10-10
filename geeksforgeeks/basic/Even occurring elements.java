import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;

/**
 * Even occurring elements.java
 *
 * GFG basic problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/even-occurring-elements4332/1?page=2&sortBy=difficulty">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  public List<Integer> findEvenOccurrences(int[] arr) {
    HashMap<Integer, Integer> map = new LinkedHashMap<>();

    for (int i = 0, n = arr.length; i < n; ++i)
      map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);

    List<Integer> res = new ArrayList<>();
    for (int val : map.keySet())
      if ((map.get(val) & 1) == 0)
        res.add(val);

    if (res.isEmpty())
      res.add(-1);

    return res;
  }
} // Solution class
