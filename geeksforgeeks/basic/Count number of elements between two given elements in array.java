import java.util.ArrayList;

/**
 * Count number of elements between two given elements in array.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/13/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/count-number-of-elements-between-two-given-elements-in-array4044/1?page=1&sortBy=difficulty">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  public int getCount(ArrayList<Integer> arr, int num1, int num2) {
    return Math.max(0, arr.lastIndexOf(num2) - arr.indexOf(num1) - 1);
  }
} // Solution class
