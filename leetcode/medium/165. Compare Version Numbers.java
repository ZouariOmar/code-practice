/**
 * 165. Compare Version Numbers.java
 *
 * leetcode problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 09/23/2025
 *        <a href="https://leetcode.com/problems/compare-version-numbers">
 *        leetcode
 *        </a>
 */

class Solution {
  public int compareVersion(String version1, String version2) {
    String[] split1 = version1.split("\\."), split2 = version2.split("\\.");
    int maxLenght = Math.max(split1.length, split2.length);
    for (int i = 0; i < maxLenght; ++i) {
      int num1 = (i < split1.length) ? Integer.parseInt(split1[i]) : 0;
      int num2 = (i < split2.length) ? Integer.parseInt(split2[i]) : 0;
      if (num1 > num2) {
        return 1;
      } else if (num1 < num2) {
        return -1;
      }
    }
    return 0;
  }
} // Solution class
