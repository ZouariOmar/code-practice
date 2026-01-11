/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-21
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new FindElements::FindElements object
 *
 * @param root {TreeNode *}
 */
FindElements::FindElements(TreeNode *root) {
  root->val = 0;
  recoverBinaryTree(root);
}

/**
 * @brief ### Recovering the `root`
 * *
 * - If treeNode.val has a value x and treeNode.left != null, then treeNode.left.val == 2 * x + 1
 * *
 * - If treeNode.val has a value x and treeNode.right != null, then treeNode.right.val == 2 * x + 2
 * *
 * @param root {TreeNode *}
 */
void FindElements::recoverBinaryTree(TreeNode *root) {
  if (!root)
    return;
  recoveredElements.insert(root->val);

  if (root->left)
    root->left->val = root->val * 2 + 1, recoverBinaryTree(root->left);

  if (root->right)
    root->right->val = root->val * 2 + 2, recoverBinaryTree(root->right);
}

/**
 * @brief ### Returns `true` if the target value exists in the recovered binary tree.
 *
 * @param target int
 * @return bool
 */
bool FindElements::find(int target) {
  return recoveredElements.count(target);
}