import java.util.HashSet;
import java.util.Set;

/**
 * 653. Two Sum IV - Input is a BST.java
 *
 * 653. Two Sum IV - Input is a BST leetcode problem
 *
 * @author @ZouariOmar <zouariomar20@gmail.com>
 * @version 0.1
 * @since 07/07/2025
 * @link https://leetcode.com/problems/two-sum-iv-input-is-a-bst
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
  private boolean helper(Set<Integer> set, TreeNode root, int k) {
    if (root == null)
      return false;
    if (set.contains(k - root.val))
      return true;
    set.add(root.val);
    return helper(set, root.left, k) || helper(set, root.right, k);
  }

  public boolean findTarget(TreeNode root, int k) {
    Set<Integer> seen = new HashSet<>();
    return helper(seen, root, k);
  }
} // Solution class
