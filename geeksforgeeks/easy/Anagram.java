
/**
 * @file Anagram.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Anagram.java file
 * @version 0.1
 * @date 2025-06-18
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/anagram-1587115620
 *       geeksforgeeks @endlink
 */

import java.util.HashMap;
import java.util.Map;

class Solution {
  public static boolean areAnagrams(String s1, String s2) {
    s1 += s2;
    HashMap<Character, Integer> hmp = new HashMap<>();
    for (final char c : s1.toCharArray())
      hmp.put(c, hmp.getOrDefault(c, 0) + 1);
    for (final Map.Entry<Character, Integer> entry : hmp.entrySet())
      if ((entry.getValue() & 1) == 1)
        return false;
    return true;
  }
} // Solution class
