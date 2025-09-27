import java.util.HashMap;
import java.util.Map;

/**
 * Longest subarray with sum divisible by K.java
 *
 * GFG160
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 23/09/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/batch/gfg-160-problems/track/prefix-sum-bonus-problem/problem/longest-subarray-with-sum-divisible-by-k1259">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  int longestSubarrayDivK(int[] arr, int k) {
    int res = 0, sum = 0;
    Map<Integer, Integer> mp = new HashMap<>();
    for (int i = 0, n = arr.length; i < n; ++i) {
      sum = ((sum + arr[i]) % k + k) % k;
      if (sum == 0)
        res = i + 1;
      else if (mp.containsKey(sum))
        res = Math.max(res, i - mp.get(sum));
      else
        mp.put(sum, i);
    }
    return res;
  }
} // Solution class
