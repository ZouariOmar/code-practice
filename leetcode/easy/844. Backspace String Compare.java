import java.util.Stack;

/**
 * 844. Backspace String Compare.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/11/2025
 *
 *        <a href="https://leetcode.com/problems/backspace-string-compare">
 *        leetcode
 *        </a>
 */

class Solution {
  private static String helper(String x) {
    Stack<Character> stk = new Stack<>();
    for (char c : x.toCharArray()) {
      if (c != '#') {
        stk.add(c);
      } else if (!stk.isEmpty()) {
        stk.pop();
      }
    }
    return stk.toString();
  }

  public boolean backspaceCompare(String s, String t) {
    return helper(s).equals(helper(t));
  }
} // Solution class | TC-O(n) -- SC-O(n)
