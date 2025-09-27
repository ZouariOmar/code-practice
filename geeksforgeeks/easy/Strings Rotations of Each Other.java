/**
 * @file Strings Rotations of Each Other.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Strings Rotations of Each Other.java file
 * @version 0.1
 * @date 2025-06-21
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/check-if-strings-are-rotations-of-each-other-or-not-1587115620
 *       geeksforgeeks @endlink
 */

// ! Time excited
// class Solution {
// // Function to check if two strings are rotations of each other or not.
// public static boolean areRotations(String s1, String s2) {
// s1 += s1;
// return s1.contains(s2);
// }
// } // Solution class

// ? JS Solution
// class Solution {
// // Function to check if two strings are rotations of each other or not.
// areRotations(s1, s2) {
// s1 += s1;
// return s1.includes(s2);
// }
// }

class Solution {
  // Function to check if two strings are rotations of each other or not.
  public static boolean areRotations(String s1, String s2) {
    s1 += s1;
    int i = 0, j = s2.length(), len = s1.length();
    while (j < len) {
      if (s2.equals(s1.substring(i, j)))
        return true;
      i++;
      j++;
    }
    return false;
  }
}
