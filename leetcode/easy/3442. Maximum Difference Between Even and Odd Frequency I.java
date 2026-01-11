/**
 * @file 3442. Maximum Difference Between Even and Odd Frequency I.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 3442. Maximum Difference Between Even and Odd Frequency I.java file
 * @version 0.1
 * @date 2025-06-10
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i
 *       leetcode @endlink
 */

/**
 * @class Solution
 * @brief Solution class
 * @details
 *          Constraints:
 *          - 3 <= s.length <= 100
 *          - s consists only of lowercase English letters.
 *          - s contains at least one character with an odd frequency and one
 *          with an even frequency.
 */
class Solution {
  public int maxDifference(String s) {
    int[] mpp = new int[26];
    int maxi = 0, mini = s.length();
    for (final char c : s.toCharArray())
      mpp[c - 'a']++;
    for (int i = 0; i < 26; i++) {
      if (mpp[i] % 2 != 0)
        maxi = Math.max(maxi, mpp[i]);
      else if (mpp[i] % 2 == 0 && mpp[i] > 0)
        mini = Math.min(mini, mpp[i]);
    }
    return maxi - mini;
  }
} // Solution class
