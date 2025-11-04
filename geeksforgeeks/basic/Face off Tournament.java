/**
 * Face off Tournament.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 28/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/multiple-in-table-tennis3310/1?page=3&sortBy=difficulty">geeksforgeeks</a>
 */

class Solution {
  public String winner(int[] arr, int m, int n) {
    int ramScore = 0, rohanScore = 0;

    for (final int it : arr) {
      if (it % m == 0)
        ++ramScore;
      else if (it % n == 0)
        ++rohanScore;
    }

    if (ramScore == rohanScore)
      return "Both";
    return ramScore > rohanScore ? "Ram" : "Rohan";
  }
} // Solution class
