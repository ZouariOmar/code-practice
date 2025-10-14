import java.util.ArrayList;
import java.util.List;

/**
 * 859. Buddy Strings.java
 *
 * leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/12/2025
 *
 *        <a href="https://leetcode.com/problems/buddy-strings">
 *        leetcode
 *        </a>
 */

class Solution {
  public boolean buddyStrings(String A, String B) {
    if (A.length() != B.length())
      return false;

    if (A.equals(B)) {
      int[] freq = new int[26];
      for (char c : A.toCharArray()) {
        ++freq[c - 'a'];
        if (freq[c - 'a'] > 1)
          return true;
      }
      return false;
    }

    int first = -1, second = -1;
    for (int i = 0; i < A.length(); ++i) {
      if (A.charAt(i) != B.charAt(i)) {
        if (first == -1)
          first = i;
        else if (second == -1)
          second = i;
        else
          return false;
      }
    }

    return (second != -1 &&
        A.charAt(first) == B.charAt(second) &&
        A.charAt(second) == B.charAt(first));
  }
} // Solution class
