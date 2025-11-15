import java.util.Scanner;

/**
 * Right Angle Triangle.java
 *
 * GFG easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-11-15
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/batch/skill-up-java/track/su-java-day6/problem/right-angle-triangle-1605685807--183457">
 *        geeksforgeeks
 *        </a>
 */

class Solution {
  public static void solve() {
    byte n = new Scanner(System.in).nextByte();
    for (byte i = 1; i <= n; ++i)
      System.out.println("* ".repeat(i));
  }
}
