/**
 * 2011. Final Value of Variable After Performing Operations.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/20/2025
 *
 *        <a href=
 *        "https://leetcode.com/problems/final-value-of-variable-after-performing-operations">
 *        leetcode
 *        </a>
 */

class Solution {
  public int finalValueAfterOperations(String[] operations) {
    int res = 0;
    for (String one : operations)
      if (one.indexOf('+') == -1)
        --res;
      else
        ++res;
    return res;
  }
}
