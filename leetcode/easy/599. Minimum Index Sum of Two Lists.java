
/**
 * @file 599. Minimum Index Sum of Two Lists.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 599. Minimum Index Sum of Two Lists.java file
 * @version 0.1
 * @date 2025-06-18
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar ZouariOmar @endlink
 */

import java.util.ArrayList;
import java.util.HashMap;

class Solution {
  public String[] findRestaurant(String[] list1, String[] list2) {
    ArrayList<String> list = new ArrayList<>();
    int min = Integer.MAX_VALUE;
    int m = list1.length;
    int n = list2.length;
    HashMap<String, Integer> map = new HashMap<>();
    for (int i = 0; i < m; i++) {
      map.put(list1[i], i);
    }
    for (int i = 0; i < n; i++) {
      if (map.containsKey(list2[i])) {
        int x = map.get(list2[i]);
        if (x + i > min)
          continue;
        if (x + i < min) {
          min = x + i;
          list.clear();
        }
        list.add(list2[i]);
      }
    }
    return list.toArray(new String[0]);
  }
} // Solution class
