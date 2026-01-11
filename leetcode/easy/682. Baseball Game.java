import java.util.Stack;

/**
 * 682. Baseball Game.java
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 17/07/2025
 * @see https://leetcode.com/problems/baseball-game
 */

class Solution {
  public int calPoints(String[] operations) {
    Stack<Integer> records = new Stack<>();
    for (final String op : operations) {
      switch (op) {
        case "C":
          records.pop();
          break;
        case "D":
          records.push(records.peek() * 2);
          break;
        case "+":
          int top = records.pop(), newTop = top + records.peek();
          records.push(top);
          records.push(newTop);
          break;
        default:
          records.push(Integer.parseInt(op));
      }
    }
    int sum = 0;
    while (!records.empty())
      sum += records.pop();
    return sum;
  }
} // Solution class
