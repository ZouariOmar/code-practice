/**
 * @file 3330. Find the Original Typed String I.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 3330. Find the Original Typed String I.java header file
 * @version 0.1
 * @date 2025-07-01
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-the-original-typed-string-i
 *       leetcode @endlink
 */

class Solution {
  public int possibleStringCount(String word) {
    int result = 1;
    for (int i = 0, len = word.length(); i < len - 1; ++i)
      if (word.charAt(i) == word.charAt(i + 1))
        ++result;
    return result;
  }
} // Solution class
