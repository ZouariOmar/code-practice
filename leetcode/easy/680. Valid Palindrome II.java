/**
 * 680. Valid Palindrome II.java
 *
 * leetcode problem
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 13/07/2025
 * @see https://leetcode.com/problems/valid-palindrome-ii
 */

class Solution {
  private boolean isPalindrome(String s, int l, int r) {
    while (l < r) {
      if (s.charAt(l) != s.charAt(r))
        return false;
      ++l;
      --r;
    }
    return true;
  }

  public boolean validPalindrome(String s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
      if (s.charAt(l) != s.charAt(r))
        return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
      ++l;
      --r;
    }
    return true;
  }
} // Solution class
