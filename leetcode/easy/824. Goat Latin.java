/**
 * 824. Goat Latin.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/06/2025
 *
 *        <a href="https://leetcode.com/problems/goat-latin">
 *        leetcode
 *        </a>
 */

class Solution {
  public String toGoatLatin(String sen) {
    StringBuilder a = new StringBuilder("a");
    String ma = "ma";
    StringBuilder res = new StringBuilder();
    String[] words = sen.split(" ");
    for (String word : words) {
      if (isVowel(word.charAt(0))) {
        res.append(word).append(ma).append(a).append(" ");
      } else
        res.append(word.substring(1))
            .append(word.charAt(0))
            .append(ma).append(a).append(" ");
      a.append("a");
    }
    return res.toString().trim();
  }

  boolean isVowel(char c) {
    return "aieouAEIOU".indexOf(c) != -1;
  }
} // Solution class
