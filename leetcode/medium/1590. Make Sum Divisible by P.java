import java.util.Map;

/**
 * 1590. Make Sum Divisible by P.java
 *
 * Leetcode meduim problem
 *
 * <p>
 * None
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 30/11/2025
 * 
 *        <a href=
 *        "https://leetcode.com/problems/make-sum-divisible-by-p">leetcode</a>
 */

class Solution {
  public int minSubarray(int[] nums, int p) {
    long total = 0;
    for (int x : nums)
      total += x;

    int mod = (int) (total % p);
    if (mod == 0)
      return 0;

    Map<Integer, Integer> map = new HashMap<>();
    map.put(0, -1);

    long prefix = 0;
    int res = nums.length;

    for (int i = 0; i < nums.length; i++) {
      prefix = (prefix + nums[i]) % p;
      int need = (int) ((prefix - mod + p) % p);

      if (map.containsKey(need))
        res = Math.min(res, i - map.get(need));

      map.put((int) prefix, i);
    }

    return res == nums.length ? -1 : res;
  }
} // Solution class
