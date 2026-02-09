/**
 * @file      1382. Balance a Binary Search Tree.cpp
 * @author    @ZouariOmar <zouariomar20@gmail.com>
 * @brief     1382. Balance a Binary Search Tree source file
 * @version   0.1
 * @date      2026-02-09
 * @copyright Copyright (c) 2026
 * @link      https://leetcode.com/problems/balance-a-binary-search-tree leetcode @endlink
 */

//? Include prototype declaration part
#include <iostream>
#include <vector>

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
  void inorder(TreeNode *node, std::vector<int> &vals) {
    if (!node)
      return;
    inorder(node->left, vals);
    vals.push_back(node->val);
    inorder(node->right, vals);
  }
  TreeNode *build(const std::vector<int> &vals, int l, int r) {
    if (l > r)
      return nullptr;
    int mid = (l + r) / 2;
    TreeNode *node = new TreeNode(vals[mid]);
    node->left = build(vals, l, mid - 1);
    node->right = build(vals, mid + 1, r);
    return node;
  }

public:
  TreeNode *balanceBST(TreeNode *root) {
    std::vector<int> arr;
    inorder(root, arr);
    return build(arr, 0, arr.size() - 1);
  }
}; // Solution class
