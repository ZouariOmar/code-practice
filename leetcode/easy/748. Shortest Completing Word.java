/**
 * 748. Shortest Completing Word.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 16/09/2025
 *
 *        <a href="https://leetcode.com/problems/shortest-completing-word">
 *        leetcode
 *        </a>
 */

class Solution {
  private boolean isComplete(String word, int[] target) {
    int[] cnt = new int[26];
    for (char c : word.toCharArray())
      cnt[c - 'a']++;

    for (int i = 0; i < 26; ++i)
      if (cnt[i] < target[i])
        return false;
    return true;
  }

  public String shortestCompletingWord(String licensePlate, String[] words) {
    int[] target = new int[26];
    for (char c : licensePlate.toCharArray())
      if (Character.isLetter(c))
        ++target[Character.toLowerCase(c) - 'a'];

    String res = null;
    for (String word : words) {
      if (isComplete(word, target)) {
        if (res == null || word.length() < res.length()) {
          res = word;
        }
      }
    }
    return res;
  }
} // Solution class
