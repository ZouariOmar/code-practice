/**
 * @file    572. Subtree of Another Tree.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   572. Subtree of Another Tree source file
 * @version 0.1
 * @date    2025-06-06
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/subtree-of-another-tree leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>

//? Function(s)/Class(es) prototype dev part
struct TreeNode {
  int val;
  TreeNode *left, *right;
}; // TreeNode struct

class Solution {
private:
  bool helper(TreeNode *root, TreeNode *subRoot) {
    if (!root && !subRoot)
      return true;
    if (!root || !subRoot)
      return false;
    return root->val == subRoot->val && helper(root->right, subRoot->right) && helper(root->left, subRoot->left);
  }

public:
  bool isSubtree(TreeNode *root, TreeNode *subRoot) {
    if (!subRoot)
      return true;
    if (!root)
      return false;
    return helper(root, subRoot) || isSubtree(root->right, subRoot) || isSubtree(root->left, subRoot);
  }
}; // Solution class

//? Main function prototype dev part

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
