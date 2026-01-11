/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-11-09
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/invert-binary-tree leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Invert the tree, and return its root.
 * @param root TreeNode *
 * @return TreeNode *
 */
TreeNode *Solution::invertTree(TreeNode* root) {
  if (!root) return root;
  swap(root->left, root->right);
  return invertTree(root->left), invertTree(root->right), root;
}