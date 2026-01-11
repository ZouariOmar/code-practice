/**
 * 1390. Four Divisors.java
 ** Leetcode meduim problem
 *
 * <p>
 * none
 * </p>
 * 
 * 
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2026-01-04
 * 
 * 
 *        <a href="https://leetcode.com/problems/four-divisors">leetcode</a>
 */

class Solution {
  public int sumFourDivisors(int[] nums) {
    int res = 0;

    for (final int n : nums) {
      int sum = 0, count = 0;

      for (int d = 1; d * d <= n; ++d) {
        if (n % d == 0) {
          int other = n / d;

          ++count;
          sum += d;

          if (other != d) {
            ++count;
            sum += other;
          }

          if (count > 4)
            break;
        }
      }

      if (count == 4)
        res += sum;
    }

    return res;
  }
} // Solution class
