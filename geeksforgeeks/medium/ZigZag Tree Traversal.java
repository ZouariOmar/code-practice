import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;

/**
 * ZigZag Tree Traversal.java
 *
 * GFG
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 09/10/2025
 *
 *        <a href=
 *        "https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1">
 *        geeksforgeeks
 *        </a>
 */

class Node {
  int data;
  Node left, right;

  Node(int d) {
    data = d;
    left = right = null;
  }
} // Node class

class Solution {
  ArrayList<Integer> zigZagTraversal(Node root) {
    ArrayList<Integer> res = new ArrayList<>();
    Queue<Node> q = new LinkedList<>();

    q.offer(root);
    boolean isLeftToRight = false;

    while (!q.isEmpty()) {
      int len = q.size();
      ArrayList<Integer> row = new ArrayList<>();

      for (int i = 0; i < len; ++i) {
        Node node = q.poll();
        row.add(node.data);

        if (node.left != null)
          q.offer(node.left);

        if (node.right != null)
          q.offer(node.right);
      }

      if (isLeftToRight) {
        Collections.reverse(row);
      }

      res.addAll(row);
      isLeftToRight = !isLeftToRight;
    }
    return res;
  }
} // Solution class
