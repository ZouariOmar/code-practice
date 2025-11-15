/**
 * @file      897. Increasing Order Search Tree.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     897. Increasing Order Search Tree source file
 * @version   0.1
 * @date      2025-11-15
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/increasing-order-search-tree leetcode @endlink
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
  TreeNode *increasingBST(TreeNode *root, TreeNode *tail = nullptr) {
    if (!root)
      return tail;
    TreeNode *res = increasingBST(root->left, root);
    root->left = nullptr;
    root->right = increasingBST(root->right, tail);
    return res;
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
