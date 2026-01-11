/**
 * @file    501. Find Mode in Binary Search Tree.cpp
 * @author  @ZouariOmar (zouariomar20@gmail.com)
 * @brief   501. Find Mode in Binary Search Tree source file
 * @version 0.1
 * @date    2025-05-01
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/find-mode-in-binary-search-tree leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

// Struct prototype declaration part
struct TreeNode {
  int val;
  TreeNode *left, *right;
  TreeNode(int _val = 0)
      : val(_val), left(nullptr), right(nullptr) {};
}; // TreeNode struct

//? Function(s)/Class(es) prototype dev part

class Solution {
public:
  void inorder(TreeNode *root, int &cc, int &cv, int &mc, std::vector<int> &ans) {
    if (!root)
      return;
    inorder(root->left, cc, cv, mc, ans);
    if (root->val == cv)
      cc++;
    else
      cv = root->val, cc = 1;

    if (cc > mc)
      mc = cc, ans = {cv};
    else if (cc == mc)
      ans.push_back(cv);

    inorder(root->right, cc, cv, mc, ans);
  }
  std::vector<int> findMode(TreeNode *root) {
    std::vector<int> ans;
    int cc = 0, cv = 0, mc = 0;
    inorder(root, cc, cv, mc, ans);
    return ans;
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
