import java.util.ArrayList;
import java.util.List;

/**
 * 872. Leaf-Similar Trees.java
 *
 * Leetcode easy problem
 *
 * <p>
 * none
 * </p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 10/22/2025
 *
 *        <a href="https://leetcode.com/problems/leaf-similar-trees">
 *        leetcode
 *        </a>
 */

class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;

  TreeNode() {
  }

  TreeNode(int val) {
    this.val = val;
  }

  TreeNode(int val, TreeNode left, TreeNode right) {
    this.val = val;
    this.left = left;
    this.right = right;
  }
} // TreeNode class

class Solution {
  private static void getLeafNodes(TreeNode root, List<Integer> res) {
    if (root == null)
      return;
    getLeafNodes(root.left, res);
    getLeafNodes(root.right, res);
    if (root.left == null && root.right == null)
      res.add(root.val);
  }

  public boolean leafSimilar(TreeNode root1, TreeNode root2) {
    List<Integer> leaves1 = new ArrayList<>();
    List<Integer> leaves2 = new ArrayList<>();

    getLeafNodes(root1, leaves1);
    getLeafNodes(root2, leaves2);

    return leaves1.equals(leaves2);
  }
} // Solution class
