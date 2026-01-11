/**
 * @file main.cpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief
 * @version 0.1
 * @date 2024-10-22
 * @copyright Copyright (c) 2024
 * @link https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree leecode @endlink
 */

//? Include prototype declaration part
#include "lib.cpp"

//? Main int function prototype dev part

/**
 * @brief # The Main Program Function
 * @return int
 */
int main() {
  // Declare vars/objs
  TreeNode *root = new TreeNode(5);
  root->left = new TreeNode(8);
  root->right = new TreeNode(9);
  root->left->left = new TreeNode(2);
  root->left->right = new TreeNode(1);
  root->left->left->left = new TreeNode(4);
  root->left->left->right = new TreeNode(6);
  root->right->left = new TreeNode(3);
  root->right->right = new TreeNode(7);
  Solution sl;

  sl.kthLargestLevelSum(root, 2);

  return 0;
}