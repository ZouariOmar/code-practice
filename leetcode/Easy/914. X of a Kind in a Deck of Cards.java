import java.util.Map;

/**
 * 914. X of a Kind in a Deck of Cards.java
 *
 * Leetcode easy problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 12/09/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards">leetcode</a>
 */

class Solution {
  public boolean hasGroupsSizeX(int[] deck) {
    int[] count = new int[10000];
    for (final int n : deck)
      ++count[n];

    int gcd = 0;
    for (final int c : count)
      if (c > 0)
        gcd = gcd == 0 ? c : gcd(gcd, c);

    return gcd > 1;
  }

  private static int gcd(int a, int b) {
    while (b != 0) {
      int t = a % b;
      a = b;
      b = t;
    }
    return a;
  }
} // Solution class
