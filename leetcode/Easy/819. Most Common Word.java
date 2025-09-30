import java.util.HashMap;
import java.util.Map;

/**
 * 819. Most Common Word.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-09-29
 *
 *        <a href="https://leetcode.com/problems/most-common-word">
 *        leetcode
 *        </a>
 */

class Solution {
  public String mostCommonWord(String paragraph, String[] banned) {
    String[] words = paragraph.split("\\W+");
    Map<String, Integer> map = new HashMap<>();
    for (final String word : words) {
      String lowerWord = word.toLowerCase();
      map.put(lowerWord, map.getOrDefault(lowerWord, 0) + 1);
    }
    for (final String word : banned)
      map.put(word, -1);
    int maxVal = -1;
    String res = "";
    for (Map.Entry<String, Integer> entry : map.entrySet()) {
      int val = entry.getValue();
      if (val > maxVal) {
        maxVal = val;
        res = entry.getKey();
      }
    }
    return res;
  }
} // Solution class
