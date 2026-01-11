/**
 * @file      671. Second Minimum Node In a Binary Tree.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     671. Second Minimum Node In a Binary Tree source file
 * @version   0.1
 * @date      07/11/2025
 * @copyright Copyright (c) 2025
 * @link      https://leetcode.com/problems/second-minimum-node-in-a-binary-tree leetcode @endlink
 */

//? Include prototype declaration part
#include <climits>
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
  void helper(TreeNode *root, unsigned int rootVal, unsigned long &ans) {
    if (!root)
      return;
    if (root->val > rootVal && ans > root->val)
      ans = root->val;
    else
      helper(root->left, rootVal, ans), helper(root->right, rootVal, ans);
  }

public:
  int findSecondMinimumValue(TreeNode *root) {
    if (!root)
      return -1;
    unsigned long ans(LONG_MAX);
    helper(root, root->val, ans);
    return (ans == LONG_MAX) ? -1 : (int)ans;
  }
}; // Solution class

/**
 * @fn         main(void)
 * @brief      The Main Program Function
 * @return     int
 */
int main(void) {
  std::cout << "Hello World !\n";
  return EXIT_SUCCESS;
}
