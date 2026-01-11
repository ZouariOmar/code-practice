/**
 * @file    617. Merge Two Binary Trees.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   617. Merge Two Binary Trees source file
 * @version 0.1
 * @date    2025-06-21
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/merge-two-binary-trees leetcode @endlink
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
public:
  TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2) {
    if (!root1)
      return root2;
    if (!root2)
      return root1;
    root1->val += root2->val;
    root1->left = mergeTrees(root1->left, root2->left);
    root1->right = mergeTrees(root1->right, root2->right);
    return root1;
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
