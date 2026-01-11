/**
 * @file      700. Search in a Binary Search Tree.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     filename source file
 * @version   0.1
 * @date      07/29/2025
 * @copyright Copyright (c) 07/29/2025
 * @link      https://leetcode.com/problems/search-in-a-binary-search-tree leetcode @endlink
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
  TreeNode *searchBST(TreeNode *root, int val) {
    if (!root)
      return nullptr;
    int curr(root->val);
    if (val < curr)
      return searchBST(root->left, val);
    if (val > curr)
      return searchBST(root->right, val);
    return root;
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
