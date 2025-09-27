/**
 * @file Implement Atoi.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Implement Atoi.java header file
 * @version 0.1
 * @date 2025-06-14
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/implement-atoi
 *       geeksforgeeks @endlink
 */

class Solution {
  public int myAtoi(String s) {
    int i = 0, n = s.length();
    while (i < n && s.charAt(i) == ' ')
      i++; // skip leading spaces

    if (i == n)
      return 0; // only spaces

    int sign = 1;
    if (s.charAt(i) == '+' || s.charAt(i) == '-') {
      sign = s.charAt(i) == '-' ? -1 : 1;
      i++;
    }

    long result = 0;
    while (i < n && Character.isDigit(s.charAt(i))) {
      result = result * 10 + (s.charAt(i) - '0');
      if (sign * result <= Integer.MIN_VALUE)
        return Integer.MIN_VALUE;
      if (sign * result >= Integer.MAX_VALUE)
        return Integer.MAX_VALUE;
      i++;
    }

    return (int) (sign * result);
  }
} // Solution class
