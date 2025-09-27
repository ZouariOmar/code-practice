/**
 * @file Add Binary Strings.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief Add Binary Strings.java file
 * @version 0.1
 * @date 2025-06-15
 * @copyright Copyright (c) 2025
 * @link https://www.geeksforgeeks.org/batch/gfg-160-problems/track/string-gfg-160/problem/add-binary-strings3805
 *       geeksforgeeks @endlink
 */

class Solution {
  public String addBinary(String s1, String s2) {
    StringBuilder result = new StringBuilder();
    int i = s1.length() - 1, j = s2.length() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry > 0) {
      int sum = carry;
      if (i >= 0)
        sum += s1.charAt(i--) - '0';
      if (j >= 0)
        sum += s2.charAt(j--) - '0';
      carry = sum / 2;
      result.append(sum % 2);
    }
    result.reverse(); // Reverse the result

    // Remove leading zeros
    int idx = 0;
    while (idx < result.length() - 1 && result.charAt(idx) == '0')
      idx++;
    return result.substring(idx); // Resturn the result :)
  }
} // Solution class
