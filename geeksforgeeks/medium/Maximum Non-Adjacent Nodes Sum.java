/**
 * Maximum Non-Adjacent Nodes Sum.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 12/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1">
 *        geeksforgeeks
 *        </a>
 */

class Node {
  int data;
  Node left, right;

  Node(int data) {
    this.data = data;
    this.left = null;
    this.right = null;
  }
} // Node class

class Solution {
  public int getMaxSum(Node root) {
    int[] res = helper(root);
    return Math.max(res[0], res[1]);
  }

  private int[] helper(Node node) {
    if (node == null)
      return new int[] { 0, 0 };

    int[] left = helper(node.left);
    int[] right = helper(node.right);

    int inc = node.data + left[0] + right[0];
    int exc = Math.max(left[0], left[1]) + Math.max(right[0], right[1]);

    return new int[] { exc, inc };
  }
} // Solution class
