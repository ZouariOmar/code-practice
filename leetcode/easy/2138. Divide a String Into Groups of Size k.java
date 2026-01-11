/**
 * @file 2138. Divide a String Into Groups of Size k.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 2138. Divide a String Into Groups of Size k.java header file
 * @version 0.1
 * @date 2025-06-22
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/divide-a-string-into-groups-of-size-k
 *       leetcode @endlink
 */

class Solution {
  public String[] divideString(String s, int k, char fill) {
    int len = s.length();
    int groups = (len + k - 1) / k;
    String[] result = new String[groups];
    for (int i = 0; i < len; i += k) {
      result[i / k] = s.substring(i, Math.min(i + k, len));
    }
    result[groups - 1] += String.valueOf(fill).repeat(k - result[groups - 1].length());
    return result;
  }
} // Solution class
