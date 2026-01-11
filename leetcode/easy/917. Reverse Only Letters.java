/**
 * 917. Reverse Only Letters.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 12/11/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/reverse-only-letters">Leetcode</a>
 */

class Solution {
  public String reverseOnlyLetters(String s) {
    int l = 0, h = s.length() - 1;
    char[] arr = s.toCharArray();

    while (l < h) {
      while (l < h && !Character.isAlphabetic(arr[l]))
        ++l;
      while (h >= 0 && !Character.isAlphabetic(arr[h]))
        --h;
      if (l < h) {
        arr[l] ^= arr[h];
        arr[h] ^= arr[l];
        arr[l] ^= arr[h];
      }
      ++l;
      --h;
    }

    return String.valueOf(arr);
  }
} // Solution class
