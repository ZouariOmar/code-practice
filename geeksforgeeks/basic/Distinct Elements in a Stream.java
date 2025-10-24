import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * Distinct Elements in a Stream.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 22/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/distinct-elements-in-a-stream1557/1?page=1&sortBy=difficulty">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  public List<Integer> getDistinct(int[] arr) {
    ArrayList<Integer> ans = new ArrayList<>();
    Map<Integer, Integer> map = new HashMap<>();
    for (final int it : arr) {
      int element = it;
      if (element > 0) {
        map.put(element, map.getOrDefault(element, 0) + 1);
      } else {
        element = Math.abs(element);
        if (map.containsKey(element)) {
          if (map.get(element) == 1) {
            map.remove(element);
          } else {
            map.put(element, map.get(element) - 1);
          }
        }
      }
      ans.add(map.size());
    }
    return ans;
  }
} // Solution class
