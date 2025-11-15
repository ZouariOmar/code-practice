import java.util.Scanner;

/**
 * Print Square.java
 *
 * GFG basic problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 15/11/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/batch/skill-up-java/track/su-java-day6/problem/print-square--105330">
 *        geeksforgeeks
 *        </a>
 */

public class Solution {
  public static void solve() {
    byte n = new Scanner(System.in).nextByte();
    System.out.println("* ".repeat(n));
    for (byte i = 0; i < n - 2; ++i)
      System.out.println("* " + " ".repeat(2 * (n - 2)) + "*");
    if (n > 1)
      System.out.println("* ".repeat(n));
  }
} // Solution class
