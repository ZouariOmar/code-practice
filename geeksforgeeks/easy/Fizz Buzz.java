
/**
 * Fizz Buzz.java
 *
 * GFG160
 *
 * <p>None</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 08/14/2025
 * <a href="https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-bonus-problems/problem/fizz-buzz" target="_blank">
 *  Fizz Buzz
 * </a>
 */

import java.util.ArrayList;

class Solution {
  public static ArrayList<String> fizzBuzz(int n) {
    ArrayList<String> res = new ArrayList<>();
    for (int i = 1; i <= n; ++i) { // TC-O(n)
      int multOfThree = i % 3, multOfFive = i % 5;
      if (multOfThree == 0 && multOfFive == 0) {
        res.add("FizzBuzz");
      } else if (multOfThree == 0) {
        res.add("Fizz");
      } else if (multOfFive == 0) {
        res.add("Buzz");
      } else {
        res.add(String.valueOf(i));
      }
    }
    return res;
  }
} // Solution class
