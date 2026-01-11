
/**
 * @file 637. Average of Levels in Binary Tree.java
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief 637. Average of Levels in Binary Tree.java header file
 * @version 0.1
 * @date 2025-06-25
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/average-of-levels-in-binary-tree
 *       leetcode @endlink
 */

import java.util.ArrayList;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

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
  public List<Double> averageOfLevels(TreeNode root) {
    if (root == null)
      return new ArrayList<>();
    List<Double> ans = new ArrayList<>();
    Queue<TreeNode> q = new LinkedList<>();
    q.offer(root);
    while (!q.isEmpty()) {
      int len = q.size();
      double currentLvlAns = 0;
      for (int i = 0; i < len; i++) {
        TreeNode node = q.poll();
        currentLvlAns += node.val;
        if (node.left != null)
          q.offer(node.left);
        if (node.right != null)
          q.offer(node.right);
      }
      ans.add(currentLvlAns / len);
    }
    return ans;
  }
} // Solution class
