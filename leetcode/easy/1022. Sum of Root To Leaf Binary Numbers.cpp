/**
 * @file      1022. Sum of Root To Leaf Binary Numbers.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     1022. Sum of Root To Leaf Binary Numbers source file
 * @version   0.1
 * @date      2026-02-24
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers leetcode @endlink
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
private:
  int dfs(TreeNode *node, int curr) {
    if (!node)
      return 0;
    curr = curr * 2 + node->val;

    if (!node->left && !node->right)
      return curr;

    return dfs(node->left, curr) + dfs(node->right, curr);
  }

public:
  int sumRootToLeaf(TreeNode *root) {
    return dfs(root, 0);
  }
}; // Solution class
