import java.util.LinkedList;
import java.util.List;

/**
 * 728. Self Dividing Numbers.java
 *
 * leetcode problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 31/08/2025
 *        <a href="https://leetcode.com/problems/self-dividing-numbers">
 *        728. Self Dividing Numbers
 *        </a>
 */

class Solution {
  private final static boolean isSelfDividingNumber(final int n) {
    int tmp = n;
    while (tmp != 0) {
      int digit = tmp % 10;
      if (digit == 0 || n % digit != 0)
        return false;
      tmp /= 10;
    }
    return true;
  }

  public List<Integer> selfDividingNumbers(int left, int right) {
    List<Integer> list = new LinkedList<>();
    while (left <= right) {
      if (isSelfDividingNumber(left))
        list.add(left);
      ++left;
    }
    return list;
  }
} // Solution class
