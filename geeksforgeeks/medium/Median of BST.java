import java.util.ArrayList;
import java.util.List;

/**
 * Median of BST.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 18/10/2025
 *
 *        <a href="https://www.geeksforgeeks.org/problems/median-of-bst/1">
 *        geeksforgeeks
 *        </a>
 */

class Node {
  int data;
  Node left;
  Node right;

  Node(int data) {
    this.data = data;
    left = null;
    right = null;
  }
} // Node class

class Solution {
  private void helper(Node root, List<Integer> arr) {
    if (root == null)
      return;
    helper(root.left, arr);
    arr.add(root.data);
    helper(root.right, arr);
  }

  public int findMedian(Node root) {
    List<Integer> arr = new ArrayList<>();
    helper(root, arr);
    int n = arr.size();
    return n % 2 == 0 ? arr.get(n / 2 - 1) : arr.get(n / 2);
  }
} // Solution class
