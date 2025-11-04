/**
 * 1716. Calculate Money in Leetcode Bank.java
 *
 * Leetcodde easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/25/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/calculate-money-in-leetcode-bank">leetcode</a>
 */

class Solution {
  public int totalMoney(int n) {
    int weeks = n / 7, days = n % 7;
    return 7 * (weeks * (weeks + 1) / 2) + 21 * weeks + days * (days + 1) / 2 + days * weeks;
  }
} // Solution class
