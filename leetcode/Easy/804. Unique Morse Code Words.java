import java.util.HashSet;
import java.util.Set;

/**
 * 804. Unique Morse Code Words.java
 *
 * leetcode
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 20/09/2025
 *        <a href="https://leetcode.com/problems/unique-morse-code-words">
 *        leetcode
 *        </a>
 */

class Solution {
  public int uniqueMorseRepresentations(String[] words) {
    String[] morisCodes = new String[] { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",
        ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
    Set<String> st = new HashSet<>();
    for (final String word : words) {
      StringBuilder s = new StringBuilder();
      for (final char c : word.toCharArray()) {
        s.append(morisCodes[c - 'a']);
      }
      st.add(s.toString());
    }
    return st.size();
  }
} // Solution class
