/**
 * 1323. Maximum 69 Number.java
 *
 * leetcode problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 16/08/2025
 *        <a href="https://leetcode.com/problems/maximum-69-number" target=
 *        "_blank">1323. Maximum 69 Number</a>
 */

class Solution {
  public int maximum69Number(int num) {
    char[] numToStr = String.valueOf(num).toCharArray();
    for (int i = 0; i < numToStr.length; ++i) {
      if (numToStr[i] == '6') {
        numToStr[i] = '9';
        return Integer.valueOf(new String(numToStr));
      }
    }
    return num;
  }
} // Solution class
