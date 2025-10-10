import java.util.ArrayList;

/**
 * Postorder Traversal.java
 *
 * none
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 08/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/postorder-traversal/1">
 *        geeksforgeeks
 *        </a>
 */

class Node {
  int data;
  Node left, right;

  Node(int val) {
    data = val;
    left = right = null;
  }
} // Node class

class Solution {
  private ArrayList<Integer> res = new ArrayList<>();

  public ArrayList<Integer> postOrder(Node root) {
    if (root == null)
      return null;
    postOrder(root.left);
    postOrder(root.right);
    res.add(root.data);
    return res;
  }
} // Solution class
