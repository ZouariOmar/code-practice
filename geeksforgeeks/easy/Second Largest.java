
/**
 * @file Second Largest.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Second Largest.java file
 * @version 0.1
 * @date 2025-06-09
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735
 *       geeksforgeeks @endlink
 */

class Solution {
  public int getSecondLargest(int[] arr) {
    int largestElement = -1, secondLagestElement = -1;
    for (final int i : arr) {
      if (i > largestElement) {
        secondLagestElement = largestElement;
        largestElement = i;
      } else if (largestElement != i && i > secondLagestElement)
        secondLagestElement = i;
    }
    return secondLagestElement;
  }
} // Solution class
