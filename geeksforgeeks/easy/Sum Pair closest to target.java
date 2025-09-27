
/**
 * @file Sum Pair closest to target.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Sum Pair closest to target.java header file
 * @version 0.1
 * @date 2025-07-02
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/two-pointer-technique-gfg-160/problem/pair-in-array-whose-sum-is-closest-to-x1124
 *       geeksforgeeks @endlink
 */

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
  public List<Integer> sumClosest(int[] arr, int target) {
    int n = arr.length;
    Arrays.sort(arr);
    List<Integer> res = new ArrayList<>();
    int minDiff = Integer.MAX_VALUE, l = 0, r = n - 1;
    while (l < r) {
      int currSum = arr[r] + arr[l], currDiff = Math.abs(target - currSum);
      if (currDiff < minDiff) {
        minDiff = currDiff;
        res = Arrays.asList(arr[l], arr[r]);
      }
      if (currSum < target)
        ++l;
      else if (currSum > target)
        --r;
      else
        return res;
    }
    return res;
  }
} // Solution class
