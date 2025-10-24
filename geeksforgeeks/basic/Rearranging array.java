import java.util.ArrayList;
import java.util.Arrays;

/**
 * Rearranging array.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 24/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/rearranging-array1648/1?page=1&sortBy=difficulty">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  public static ArrayList<Integer> Rearrange(int[] arr) {
    Arrays.sort(arr);
    int n = arr.length, l = 0, h = n - 1;
    ArrayList<Integer> res = new ArrayList<>();

    while (l < h) {
      res.add(arr[l++]);
      res.add(arr[h--]);
    }

    if (n % 2 == 1)
      res.add(arr[n / 2]);

    return res;
  }
} // Solution class
