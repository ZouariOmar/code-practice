/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 0.1
 * @date 2025-02-22
 * @copyright Copyright (c) 2025
 * @link https://leetcode.com/problems/recover-a-tree-from-preorder-traversal leetcode @endlink
 */

//? Include prototype declaration part
#include "../inc/inc.hpp"

//? Function/Class prototype dev part

/**
 * @brief ### Construct a new TreeNode::TreeNode object
 *
 * @param x int
 */
TreeNode::TreeNode(int x)
    : val(x), left(nullptr), right(nullptr) {};

/**
 * @brief ### 
 *
 * @param traversal string
 * @return {TreeNode *}
 */
TreeNode *Solution::recoverFromPreorder(string traversal) {
  s = traversal;
  TreeNode *node = new TreeNode(-1);
  helper(node, 0);
  return node->left;
}

/**
 * @brief ### Help the `recoverFromPreorder(string)` fn
 *
 * @param parent
 * @param lvl
 */
void Solution::helper(TreeNode *parent, int lvl) {
  while (idx < s.length() && lvl == level) {
    int num = 0;
    while (idx < s.length() && isdigit(s[idx]))
      num = num * 10 + (s[idx++] - '0');
    TreeNode *node = new TreeNode(num);
    if (!parent->left)
      parent->left = node;
    else
      parent->right = node;
    level = 0;
    while (idx < s.length() && s[idx] == '-') {
      level++;
      idx++;
    }
    helper(node, lvl + 1);
  }
}