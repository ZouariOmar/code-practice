import java.util.ArrayList;

/**
 * Generate all binary strings.java
 *
 * GFG160
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 29/09/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/generate-all-binary-strings/1">
 *        Generate all binary strings
 *        </a>
 */

class Solution {
  public ArrayList<String> binstr(int n) {
    int target = (int) Math.pow(2, n);
    ArrayList<String> res = new ArrayList<>();
    for (int i = 0; i < target; ++i) {
      String binStr = Integer.toBinaryString(i);
      binStr = "0".repeat(n - binStr.length()) + binStr;
      res.add(binStr);
    }
    return res;
  }
} // Solution class
