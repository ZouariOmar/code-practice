import java.util.Arrays;

/**
 * Triplet Sum in Array.java
 *
 * GFG160
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 08/18/2025
 *        <a href=
 *        "https://www.geeksforgeeks.org/batch/gfg-160-problems/track/two-pointer-technique-bonus-problems/problem/triplet-sum-in-array-1587115621">
 *        Triplet Sum in Array
 *        </a>
 */

class Solution {
  public static boolean hasTripletSum(int arr[], int target) {
    Arrays.sort(arr);
    for (int i = 0, len = arr.length; i < len - 2; ++i) {
      int l = i + 1, r = len - 1;
      int req = target - arr[i];
      while (l < r) {
        int tmp = arr[l] + arr[r];
        if (tmp == req) {
          return true;
        } else if (tmp > req) {
          --r;
        } else {
          ++l;
        }
      }
    }
    return false;
  }
}
