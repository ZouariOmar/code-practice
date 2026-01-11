/**
 * @file 2566. Maximum Difference by Remapping a Digit.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 2566. Maximum Difference by Remapping a Digit.java header file
 * @version 0.1
 * @date 2025-06-14
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-difference-by-remapping-a-digit
 *       leetcode @endlink
 */

class Solution {
  public static void main(String[] args) {
    System.out.println(Solution.minMaxDifference(11891));
  }

  public static int minMaxDifference(int num) {
    String numToStr = String.valueOf(num);
    int minNum = Integer.parseInt(numToStr.replace(numToStr.charAt(0), '0'));
    char index = ' ';
    for (int i = 0, len = numToStr.length(); i < len; i++) {
      if (numToStr.charAt(i) != '9') {
        index = numToStr.charAt(i);
        break;
      }
    }
    return (index == ' ') ? (num - minNum) : (Integer.parseInt(numToStr.replace(index, '9')) - minNum);
  }
} // Solution class
