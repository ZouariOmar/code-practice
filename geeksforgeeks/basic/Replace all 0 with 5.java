/**
 * Replace all 0's with 5.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 15/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/replace-all-0s-with-5/1?page=1&sortBy=difficulty">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  int convertfive(int num) {
    int sum = 0, place = 1;

    if (num == 0)
      return 5;

    while (num != 0) {
      int ld = num % 10;
      if (ld == 0)
        ld = 5;

      sum = ld * place + sum;
      place = place * 10;
      num = num / 10;
    }

    return sum;
  }
} // Solution class
