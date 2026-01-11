/**
 * 645. Set Mismatch.java
 *
 * 645. Set Mismatch leecode problem
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 04/07/2025
 */

class Solution {
  public int[] findErrorNums(int[] nums) {
    int[] ans = new int[2],
        check = new int[nums.length + 1];
    for (int i = 0; i < nums.length; i++) {
      check[nums[i]]++;
      if (check[nums[i]] == 2) {
        ans[0] = nums[i];
      }
    }
    for (int j = 1; j < check.length; j++) {
      if (check[j] == 0) {
        ans[1] = j;
        break;
      }
    }
    return ans;
  }
} // Solution class
