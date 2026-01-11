/**
 * @file lib.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief The helper source file
 * @version 0.1
 * @date 2024-09-29
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/balanced-binary-tree leecode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new TreeNode::TreeNode object
 * @param x int
 */
TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr) {};

/**
 * @brief ### Given a binary tree, determine if it is height-balanced.
 * @param root TreeNode *
 * @return true false
 */
bool Solution::isBalanced(TreeNode *root) {
  return height(root) != -1;  // If height is -1, it means the tree is not balanced
}

/**
 * @brief ### Helper function (help the isBalanced bool function)
 * @param root TreeNode *
 * @return int 
 */
int Solution::height(TreeNode *root) {
  if (!root) return 0;
  int leftHeight = height(root->left);
  int rightHeight = height(root->right);
  if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1)
    return -1;                              // This subtree is not balanced
  return max(leftHeight, rightHeight) + 1;  // Return the height of the tree
}

