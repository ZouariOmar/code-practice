/**
 * Min Chars to Add for Palindrome.java
 *
 * GFG160
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 07/19/2025
 * @see https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/minimum-characters-to-be-added-at-front-to-make-string-palindrome
 */

class Solution {
  private static int[] lpsArray(String s) {
    int n = s.length();
    int[] lps = new int[n];
    lps[0] = 0;
    int len = 0, i = 1;
    while (i < n) {
      if (s.charAt(i) == s.charAt(len)) {
        lps[i++] = ++len;
      } else {
        if (len != 0) {
          len = lps[len - 1];
        } else {
          lps[i++] = 0;
        }
      }
    }
    return lps;
  }

  public int minChar(String s) {
    int n = s.length();
    s = s + "$" + new StringBuilder(s).reverse().toString();
    int[] lps = lpsArray(s);
    return n - lps[lps.length - 1];
  }
} // Solution class
