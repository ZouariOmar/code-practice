/**
 * @file      110. Balanced Binary Tree.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     110. Balanced Binary Tree source file
 * @version   0.1
 * @date      2026-02-08
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/balanced-binary-tree leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}; // TreeNode struct

class Solution {
private:
  int isBalancedRec(TreeNode *root) {
    if (!root)
      return 0;

    int lHeight = isBalancedRec(root->left), rHeight = isBalancedRec(root->right);

    if (lHeight == -1 || rHeight == -1 || abs(lHeight - rHeight) > 1)
      return -1;

    return std::max(lHeight, rHeight) + 1;
  }

public:
  bool isBalanced(TreeNode *root) {
    if (!root)
      return true;
    return (isBalancedRec(root) > 0);
  }
}; // Solution class
